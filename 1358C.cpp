#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		ll n,m;
		cin >> n >> m;
		m = m*n;
		m = ceil(m/2.0);
		cout << m << endl;
	}
}

