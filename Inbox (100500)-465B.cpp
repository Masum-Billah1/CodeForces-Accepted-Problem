#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c=0,k=1;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++){
		if(a[i]==1){
			c++;
			k = c;	
		}
		if(a[i]==0 && k==c)
			c++;
	}
	if(a[n-1]==0 && c>0)
		c--;
	cout << c <<endl;
}
