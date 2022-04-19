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
const ll na = 1e16;
using namespace std;
int main(){
	IOS;
	int test=1;
	cin >> test;
	while(test--){
		ll i,j,n,m,k,temp=1,sz,up;
		bool yes = 1;
		cin >> n >> k;
		ll b[n];
		vecl v;
		for(i=0;i<n;i++)
			cin >> b[i];
		while(temp<=na){
			v.pus(temp);
			temp*=k;
		}
		sz = v.size();
		ll a[sz+1]={0};
		for(i=0;i<n;i++){
			while(b[i]>=k||b[i]==1){
				up = upper_bound(v.begin(),v.end(),a[i])-v.begin();
				if(a[up]!=0){
					yes = 0;
				}
				b[i]-=b[up];
			}
			if(b[i]!=0){
				yes = 0;
				break;
			}
		}
		if(yes == 1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}

