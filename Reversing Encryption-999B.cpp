#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,d,j;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	for(i=n;i>=1;i--){
		if(n%i==0){
			int d =i;
			for(j=0;j<n;j++){
				if(a[j]>=1 && a[j]<=d){
					a[j]=d-a[j]+1;
				}
			}
		}
	}
	string s;
	cin >> s;
	for(i=0;i<n;i++){
		cout <<s[a[i]-1];
	}
	cout << endl;
}
