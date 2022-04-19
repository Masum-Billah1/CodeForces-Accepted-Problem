#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long int n,m,dif,group1,group2,e,result;
		cin >> n >> m;
		dif = n-m;
		e = dif/(m+1);
		group2 =  dif % (m+1);
		group1 = m+1-group2;
		result =((n*(n+1))/2.0)-(e*(e+1)/2.0)*group1-((e+1)*(e+2)/2.0)*group2;
		cout << result <<endl;
	}
}
