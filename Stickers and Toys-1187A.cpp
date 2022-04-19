#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,a,b;
		cin >> n >> a >> b;
		a = n-min(a,b)+1;
		cout << a << endl;
	}
}
