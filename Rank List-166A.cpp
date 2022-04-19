#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,j,c=0;
	cin >> n >> k;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
			else if(a[j]==a[j+1]){
				if(b[j]>b[j+1]){
					swap(b[j],b[j+1]);
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[k-1]==a[i] && b[k-1]==b[i])
			c++;
	}
	cout << c << endl;
}
