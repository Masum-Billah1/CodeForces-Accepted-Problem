#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,d,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	l = a[1]-a[0];
	for(i=2;i<n;i++){
		d = a[i]-a[i-1];
		if(d!=l)
			break;
	}
	if(n==i)
		cout << a[n-1]+l;
	else
		cout << a[n-1]<<endl;
}
