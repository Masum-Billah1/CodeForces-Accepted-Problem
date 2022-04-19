#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m,k,ekjon;
		cin >> n >> m >> k;
		ekjon = n/k;
		if(ekjon>=m){
			cout << m << endl;
			continue;
		}
		else{
			m-=ekjon;
			int temp = ceil(m*1.0/(k-1));
			cout << ekjon - temp << endl;
		}
	}
}

