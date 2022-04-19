#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,low,high;
	cin >> n;
	long long int a[n/2],b[n];
	cin >> a[0];
	low = 0;
	high = a[0];
	b[0] = 0;
	b[n-1] = high;
	for(i=1;i<n/2;i++){
		cin >> a[i];
		high = min((a[i]-low),high);
		low = a[i]-high;
		b[i] = low;
		b[n-i-1] = high;
	}
	for(i=0;i<n;i++){
		cout <<b[i]<<" ";
	}
}
