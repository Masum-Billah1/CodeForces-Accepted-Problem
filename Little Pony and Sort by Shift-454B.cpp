#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c=0,temp;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=1;i<n;i++){
		if(a[i-1]>a[i]){
			c++;
			temp = i;
		}
	}
	if(c == 1 && a[n-1] > a[0])
		c++;
	if(c == 0)
		cout << 0 <<endl;
	else if(c == 1)
		cout << n-temp << endl;
	else
		cout << -1 <<endl;
}
