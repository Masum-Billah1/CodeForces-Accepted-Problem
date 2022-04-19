#define	 ll     long long
#define  seti   set<int>
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
	int s,n,a,b,i;
	veci v;
	cin >> s >> n;
	for(i=0;i<n;i++){
		cin >> a >> b;
		v.pus(b-a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		s+=v[i];
		if(s<0){
			cout <<"NO"<<endl;
			return 0;
		}
	}
	cout <<"YES"<<endl;
}

