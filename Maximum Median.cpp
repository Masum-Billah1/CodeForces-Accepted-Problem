#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0;
	long long int temp,i,k;
	cin >> n >> k;
	int a[n];
	long long int b[n/2];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=0;i<n/2;i++)
		b[i] = a[n/2+1+i]-a[n/2+i];
		
	for(i=1;i<=n/2;i++){
		temp = min(b[i-1]*i,k);
		k = k-temp;
		c = c+temp/i;
		if(k<=0)
			break;
	}
	c = c+k/i;
	cout << a[n/2]+c << endl;
}
//dedicated to Sumaiya Tasnim Fiha...
