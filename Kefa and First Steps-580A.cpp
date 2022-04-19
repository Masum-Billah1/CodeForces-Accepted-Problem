#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,large=0,temp=1;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n-1;i++){
		if(a[i]<=a[i+1])
			temp++;
		else{
			large = max(large,temp);
			temp = 1;
		}
	}
	large = max(large,temp);
	cout << large << endl;
}
