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
	ll sum=0,n;
	cin >> n;
	ll a,b[n]={0},cnt[21]={0},c,i,j;
	for(i=0;i<n;i++){
		cin >> a;
		c=0;
		while(a){
			cnt[c]+=a%2;
			a/=2;
			c++;
		}
	}
	for(i=0;i<21;i++){
		for(j=0;j<cnt[i];j++){
			b[j]|=1<<i;
		}
	}
	for(i=0;i<n;i++)
		sum+=b[i]*b[i];
	cout << sum << endl;
}
//Dedicated to Sumaiya Tasnim Fiha.
