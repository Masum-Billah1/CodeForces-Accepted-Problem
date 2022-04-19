#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,c=5,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		s = s+a[i];
	}
	for(i=1;i<=5;i++){
		if((s+i)%(n+1) == 1)
			c--;
	}
	cout << c <<endl;
}

