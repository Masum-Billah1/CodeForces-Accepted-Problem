#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin >> n;
	int a[n],b[7]={0};
	for(i=0;i<n;i++){
		cin >> a[i];
		for(j=6;j>=0;j--){
			b[j]=b[j]+(a[i]%10);
			a[i]=a[i]/10;
		}
	}
	sort(b,b+7);
	cout << b[6] <<endl;
}
