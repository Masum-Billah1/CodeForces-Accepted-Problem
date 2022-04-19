#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n-3;i++){
	//	cout <<a[i]<<a[i+1]<<a[i+2]<<a[i+3]<<endl;
		if(a[i]==1 && a[i+1]==0 && a[i+2]==1 && a[i+3]==0){
			c++;
			a[i+2]=0;
		}
	}
	for(i=0;i<n-2;i++){
		if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
			c++;
		}
	}
	cout << c << endl;
}
