#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i;
		cin >> n;
		if(n<4){
			cout << -1 <<endl;
			continue;
		}
		else if(n%2==0)
			for(i=2;i<=n;i=i+2)
				cout << i <<" ";
		else
			for(i=1;i<=n;i=i+2)
				cout << i <<" ";
				
		cout << n-3<<" "<<n-1<<" ";
		for(i=n-5;i>=1;i=i-2){
			cout << i <<" ";
		}cout << endl;
	}
}
