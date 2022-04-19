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
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int test;
	cin >> test;
	while(test--){
	 	ll i,n,a,b;
		cin >> a >> b;
		if(a-b>1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}

