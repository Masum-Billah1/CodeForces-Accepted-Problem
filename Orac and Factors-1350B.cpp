#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		ll n,k,i;
		cin >> n >> k;
		for(i=2;i<=sqrt(n);i++){
			if(n%i == 0){
				n+=i;
				break;
			}
		}
		if(i-1 == (int)sqrt(n))
			n +=n;
		k--;
		cout << n+(2*k)<<endl;
	}
}
//Dedicated to sumaiya tasnim fiha
