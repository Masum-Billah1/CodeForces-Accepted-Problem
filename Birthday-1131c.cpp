#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k=0;
	cin >> n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=0;i<n;i=i+2,k++){
		b[k]=a[i];
		if(k==(n-k-1))
			break;
		b[n-k-1]=a[i+1];
	}
	for(i=0;i<n;i++)
		cout << b[i]<<" ";
	cout << endl;
}
