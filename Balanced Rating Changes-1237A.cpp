#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,c=0;
	cin >> test;
	while(test--){
		int n,div;
		cin >> n;
		if(n%2==0){
			cout << n/2<<endl;
			continue;
		}
		n = n+c;
		div = n/2;
		cout << div << endl;
		c = n-(div*2);
	}
}
