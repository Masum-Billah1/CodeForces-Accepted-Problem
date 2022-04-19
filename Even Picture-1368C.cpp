#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
int main(){
	IOS;
	int n,i,j;
	cin >> n;
	cout << n*3+4 << endl;
	cout << 0 <<" "<<0<<endl;
	cout << 1 <<" "<<0<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cout << i+j <<" "<<i+1<<endl;
		}
	}
	cout << n <<" "<<n+1<<endl;
	cout <<n+1 <<" "<<n+2<<endl;
}

