#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,t;
	long long int s = 0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(i=0;i<n/2;i++){
		t = a[n-i-1];
		s = s+(a[i]+a[n-i-1])*(a[i]+a[n-i-1]);

	}
	cout << s <<endl;
}
