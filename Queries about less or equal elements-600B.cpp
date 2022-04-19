#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	cin >> n >> m;
	int a[n],b[m];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(i=0;i<m;i++){
		cin >> b[i];
		int quary = upper_bound(a,a+n,b[i])-a;
		cout << quary <<" ";
	}
	cout << endl;
}
//Dedicated to Ankar Kumar Shaha...
