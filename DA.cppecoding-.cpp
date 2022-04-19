#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,i;
	cin >> n;
	string a,b;
	cin >> a;
	l=n;
	for(i=0,l=n-1;i<n;i++,l--){
		if(l%2==0){
			b[l/2+i]=a[i];
		}
		else{
			b[l/2]=a[i];
		}
	}
	b[i]='/0';
	for(i=0;i<n;i++)
		cout<<b[i];
	cout <<endl;
}
