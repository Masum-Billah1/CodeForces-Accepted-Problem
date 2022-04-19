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
		int n,i;
		cin >> n;
		int a[n],b[n],c[n];
		for(i=0;i<n;i++) 
			cin >> a[i];
		for(i=0;i<n;i++)
			cin >> b[i];
		for(i=0;i<n;i++)
			c[i] = a[i]-b[i];
			
		sort(c,c+n);
		ll ans = 0;
		for(i=0;i<n;i++){
			if(c[i]>0){
				int pos = upper_bound(c,c+n,-c[i])-c;
				ans+=i-pos;
			}
		}	
		cout << ans << endl;
	}
}

