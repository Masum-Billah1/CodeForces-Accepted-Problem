#include<bits/stdc++.h>
using namespace std;
int main(){
	string fstr,pstr,tstr;
	int n,m,i,j,c=0,p=0,l,q;
	cin >> n >> m;
	string str[n];
	int t[n]={0};
	for(i=0;i<n;i++)
		cin >> str[i];
	for(i=0;i<n;i++){
		tstr = str[i];
		reverse(tstr.begin(),tstr.end());
		if(t[i]==0)
			for(j=0;j<n;j++){
				if(str[j]==tstr && j!=i){
					t[i]=1;
					t[j]=1;
					fstr+=str[i];
					break;
				}
			}
	}
	q = ceil(m*1.0/2);
	for(i=0;i<n;i++){
		if(t[i]==0){
			for(j=0;j<q;j++){
				if(str[i][j]==str[i][m-1-j]){
					c=0;
				}
				else{
					c=1;
					break;
				}
			}
		if(c==0){
			pstr=str[i];
			p = 1;
			break;
			}
		}
	}
	l = fstr.size()*2+pstr.size();
	cout << l <<endl;
	cout << fstr;
	if(p==1)
		cout <<pstr;
	reverse(fstr.begin(),fstr.end());
	cout <<fstr<<endl;	
}
