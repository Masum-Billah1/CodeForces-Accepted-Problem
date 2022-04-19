#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,a;
	cin >> n;
	i = sqrt(n);
	for(;i>0;i--){
		a = n/i;
		if(i*a == n && __gcd(i,a)==1){
			cout << i <<" "<<a<<endl;
			return 0;
		}
	}
}
