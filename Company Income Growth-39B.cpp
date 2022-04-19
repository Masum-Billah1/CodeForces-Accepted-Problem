#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=1,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i] == s){
			s++;
		}
	}
	cout << s-1 << endl;
	s = 1;
	for(i=0;i<n;i++){
		if(a[i] == s){
			cout << i+2001<< " ";
			s++;
		}
	}
	
}
