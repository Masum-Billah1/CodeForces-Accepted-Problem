#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,s=0,i,e=0,o=0;
		cin >> n;
		int a;
		for(i=0;i<n;i++){
			cin >> a;
			s = s+a;
			if(a%2)
				e=1;
			else
				o=1;
		}
		if(s%2==1||e==1&&o==1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}


