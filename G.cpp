#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long int s=0,i;
	cin >> n;
	for(i=1;i<=n;i++){
		s = s+pow(2.0,i*1.0);
		cout << s <<endl;
	}
	cout << s <<endl;
}
