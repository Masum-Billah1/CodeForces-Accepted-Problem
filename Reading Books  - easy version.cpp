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
	int n,k,i;
	cin >> n >> k;
	int a,b,c,sum=0;
	veci one,two,final;
	for(i=0;i<n;i++){
		cin >> a >> b >> c;
		if(b == 1 && c == 1)
			final.pus(a);
		if(b == 1 && c == 0)
			one.pus(a);
		else if(c == 1 && b == 0)
			two.pus(a);
	}
	sort(one.begin(),one.end());
	sort(two.begin(),two.end());
	int sz = min(one.size(),two.size());
	for(i=0;i<sz;i++){
		final.pus(one[i]+two[i]);
	}
	sort(final.begin(),final.end());
	if(final.size() < k)
		cout << -1 << endl;
	else{
		for(i=0;i<k;i++){
			sum+=final[i];
		}
		cout << sum << endl;
	}
}
//Dedicated To Sumaiya Tasnim Fiha.
