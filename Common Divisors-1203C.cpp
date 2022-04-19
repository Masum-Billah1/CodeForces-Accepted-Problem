#define	 ll     long long
#define  seti   set<int>
#define  setl   set<ll>
#define  veci   vector<int>
#define  vecl   vector<ll>
#define  pus(a) push_back(a)
#define  pop()  pop_back()
#define  Min(v)   *min_element(v.begin(),v.end())
#define  Max(v)   *max_element(v.begin(),v.end())
#define  IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int test=1;
	//cin >> test;
	while(test--){
		ll n,i,ans=0;
		cin >> n;
		ll a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		ll gcd = a[0];
		for(i=1;i<n;i++)
			gcd =__gcd(gcd,a[i]);
		
		for(i=1;i*i<=gcd;i++){
			if(i*i==gcd)
				ans++;
			else if(gcd%i==0)
				ans+=2;
		}
		cout << ans << endl;	
	}
}

