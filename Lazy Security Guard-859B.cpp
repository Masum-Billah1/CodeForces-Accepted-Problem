#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,root,pm,extra;
	cin >> n;
	root = sqrt(n*1.0);
	pm = root*4;
	extra =ceil((n-root*root)/(root*1.0))*2;
	cout << extra+pm <<endl;
	
}
