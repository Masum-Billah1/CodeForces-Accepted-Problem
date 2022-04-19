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
	ll u,v,d,bit;
	cin >> u >> v;
	if(u%2 != v%2 || u>v){
		cout << -1 << endl;
		return 0;
	}
	d = abs(u-v)/2;
	bit = u&d;
	if(v == 0)
		cout << 0 << endl;
	else if(u == v){
		cout << 1 << endl;
		cout << v << endl;
	}
	else if(bit == 0){
		cout << 2 << endl;
		cout << d+u <<" "<<d<<endl;
	}
	else{
		cout << 3 << endl;
		cout << u <<" "<<d <<" "<<d<<endl;
	}
}
//Dedicated To Ankar

