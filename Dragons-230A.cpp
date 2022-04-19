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
const int na = 1e4+1;
int c[na];
using namespace std;
int main(){
	IOS;
	int s,n,i,j;
	bool yes = 1;
	seti ss;
	set<int>::iterator it;
	cin >> s >> n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
		c[a[i]]+=b[i];
		ss.insert(a[i]);
	}
	for(it=ss.begin();it!=ss.end();it++){
		int temp = *it;
		if(temp < s)
			s+=c[temp];
		else
			yes = 0;	
	}
	if(yes == 1) cout <<"YES"<<endl;
	else cout <<"NO"<<endl;
}

