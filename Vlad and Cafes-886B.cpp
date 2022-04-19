#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main(){
	int n,i,e;
	cin >> n;
	int b[n];
	for(i=0;i<n;i++)
		cin >> b[i];
	for(i=n-1;i>=0;i--){
		if(a[b[i]]==0){
			e = b[i];
			a[b[i]]=1;
		}
	}
	cout << e <<endl;
}
