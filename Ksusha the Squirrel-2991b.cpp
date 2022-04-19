#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,c=0,yes=0,i;
	cin >> n >> k;
	string a;
	cin >> a;
	for(i=0;i<n;i++){
		if(a[i]=='#')
			c++;
		else{
			if(c>=k){
				yes=1;
				break;
			}
			c=0;
		}
	}
	if(c>=k){
			yes=1;
	}
	if(yes==1)
		cout <<"NO"<<endl;
	else
		cout <<"YES"<<endl;
}
