#include<bits/stdc++.h>
using namespace std;
int b[200000];
int main(){
	int test,i;
	cin >> test;
	while(test--){
		int n,s=0,c=1;
		cin >> n;
		int a;
		for(i=0;i<n;i++){
			cin >> a;
			if(a<0)
				a = (n+(a%n)+i)%n;
			else
				a = (a%n+i)%n;
			b[a]=1;
		}
		for(i=0;i<n;i++){
			if(b[i]==0){
				cout <<"NO"<<endl;
				c=0;
				break;
			}
		}
		for(i=0;i<n;i++){
			b[i]=0;
		}
		if(c == 1)
			cout <<"YES"<<endl;
	}
}
