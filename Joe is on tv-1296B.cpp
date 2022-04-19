#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,ndx=0;
	cin >> n;
	string a;
	cin >> a;
	for(i=0;i<n-2;i++){
		if(a[i]=='x'&&a[i+1]=='x'&&a[i+2]=='x')
			ndx++;
	}
	cout << ndx <<endl;
}
