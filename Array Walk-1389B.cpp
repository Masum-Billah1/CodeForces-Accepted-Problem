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
	cin >> test;
	while(test--){
		int n,k,t,i,j,temp,mn,sum=0,ans=0,mx=0,ind;
		cin >> n >> k >> t;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		mn = k-(2*t);
		mn = max(1,mn);
		for(i=0;i<mn;i++){
			sum+=a[i];
			if(i>0){
				mx = max(mx,(a[i]+a[i-1]));
			}
		}
		for(i=mn;i<=k;i++){
			temp = 0;
			sum+=a[i];
			mx = max(mx,(a[i]+a[i-1]));
			ind = a[i-1];
			temp = sum+mx*((k-i)/2);
			if((k-i)%2)
				temp+=ind;
			ans = max(temp,ans);
		}
		cout << ans<< endl;
	}
}

