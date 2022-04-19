#define	 ll     long long
#define  seti   set<int>
#define  setl   set<ll>
#define  veci   vector<long long int>
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
		ll i,j,n,mul=1,res = -1000000000000000000,zero=0,mn,pn,tmp;
		//cout <<"res : "<<res<<endl;
		veci p,m;
		cin >> n;
		ll a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			if(a[i] < 0)
				m.pus(a[i]);
			else if(a[i]==0)
				zero = 1;
			else 
				p.pus(a[i]);
		}
		sort(m.begin(),m.end());
		sort(p.begin(),p.end());
		
		mn = m.size();
		pn = p.size();
		if(mn+pn == 5){
			res = a[0]*a[1]*a[2]*a[3]*a[4];
		}
		if(mn>=5)
			res = m[mn-1]*m[mn-2]*m[mn-3]*m[mn-4]*m[mn-5];
		if(zero == 1)
			res = 0;
		if(pn >= 5)
			res = p[pn-1]*p[pn-2]*p[pn-3]*p[pn-4]*p[pn-5];
			
		if(mn >=2 && pn>=3){
			tmp = m[0]*m[1]*p[pn-1]*p[pn-2]*p[pn-3];
			res = max(res,tmp);
		}
		if(mn >=4 && pn >=1){
			tmp = m[0]*m[1]*p[pn-1]*m[2]*m[3];			
			res = max(res,tmp);
		}
		cout << res << endl;
	}
}

