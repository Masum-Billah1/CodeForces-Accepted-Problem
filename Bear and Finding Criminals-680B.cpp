#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,limik,i,s=0;
	cin >> n >> limik;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		s = s+a[i];
	}
	int large = limik-1;
	int small = n-limik;
	limik--;
	if(small>large)
		swap(small,large);
	for(i=1;i<=small;i++){
		if(a[limik-i]!=a[limik+i])
			s--;
	}
	cout << s <<endl;
}
