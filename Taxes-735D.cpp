#include<bits/stdc++.h>
int isprime(int n){
	int i=2;
	for(;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
using namespace std;
int main(){
	int n,i,p;
	cin >> n;
	p = isprime(n);
	//According to Goldbach Conjecture...
	if(p == 1)
		cout << 1 << endl;
	else if(n%2 == 0 || isprime(n-2))
		cout << 2 << endl;
	else
		cout << 3 << endl;
}
//Dedicated to all of my Family Member...
