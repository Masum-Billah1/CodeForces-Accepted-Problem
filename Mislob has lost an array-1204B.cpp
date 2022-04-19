#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,r;
	cin >> n >> l >> r;
	long long int min,max;
	min = pow(2*1.0,l*1.0)-1+n-l;
	max = pow(2*1.0,r*1.0)-1+pow(2*1.0,(r*1.0-1.0))*(n-r);
	cout << min <<" "<<max<<endl;
}
