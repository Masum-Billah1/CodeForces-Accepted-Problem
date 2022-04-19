#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int s = 0;
	int n,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	s = s+a[0]+1;
	for(i=1;i<n;i++){
		s = s+abs(a[i]-a[i-1])+2;
	}
	cout << s <<endl;
}
