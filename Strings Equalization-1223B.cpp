#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,a[26]={0},i,j;
	cin >>q;
	while(q--){
		string s,t;
		int c=0;
		cin >> s >> t;
		int l = s.size();
		for(i=0;i<l;i++){
			for(j=0;j<l;j++){
				if(s[i]==t[j]){
					c=1;
					break;
				}
			}
		}
	if(c == 1)
		cout <<"YES"<<endl;
	else
		cout <<"NO"<<endl;	
	}
}
