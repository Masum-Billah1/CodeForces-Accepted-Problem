#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=1;i<n;i++){
		for(j=i-1;j>=0;j--){
			if(a[j+1]<a[j]){
				swap(a[j+1],a[j]);
			}
			else
				break;
		}
	}
	for(i=0;i<n;i++)
		cout << a[i]<<" ";
	cout << endl;
}
