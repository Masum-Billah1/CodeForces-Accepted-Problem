#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i;
	cin >> n >>k;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int temp = b[n-k];
	cout << temp<<endl;
	for(i=0;i<n;i++){
		if(a[i]>=temp)
			cout << i+1<<" ";
	}
}
