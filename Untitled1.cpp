#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		ll n,res=0,i=1,temp;
		cin >> n;
		while(n){
			temp = n;
			n/=2;
			temp-=n;
			res+=temp*i;
			i++;
		}
		cout << res << endl;
	}
}

