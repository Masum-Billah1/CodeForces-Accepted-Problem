#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int dif=0;
	int n,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(a[i]<i+1){
			dif = dif+i+1-a[i];
		}
		else
			dif = dif+a[i]-i-1;
	}
	cout << dif << endl;
}
