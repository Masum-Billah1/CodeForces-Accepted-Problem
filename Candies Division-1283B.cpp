//dedicated to ankar
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long int n,k,t;
		cin >> n >> k;
		t = n/k;
		t = t*k+(k/2);
		if(n>=t)
			cout << t <<endl;
		else
			cout << n <<endl;
	}
}
