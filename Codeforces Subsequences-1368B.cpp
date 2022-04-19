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
	string str = "codeforces";
	ll n,i,temp=2,multi=1;
	cin >> n;
	veci v(10,1);
	while(n>multi){
		for(i=0;i<10;i++){
			cout << v[i]<<" ";
		}cout << endl;
		
		for(i=0;i<10;i++){
			v[i]++;
			multi/=(temp-1);
			multi *= temp;
			if(multi >= n)
				break;
		}
		temp++;
	}
	for(i=0;i<10;i++){
		while(v[i]--){
			cout << str[i];
		}
	}cout << endl;
}

