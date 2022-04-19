#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,ins;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	ins = a[n-2]-a[0];
	ins = min(ins,a[n-1]-a[1]);
	cout << ins <<endl;
}
