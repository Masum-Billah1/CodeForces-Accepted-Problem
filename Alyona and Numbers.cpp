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
	ll n,m,i,s=0,j=4;
	cin >> n >> m;
	ll a[5]={0};
	ll b[5]={0};
	for(i=0;i<n;i++)
		a[i%5]++;
	b[0] = (m+1)/5;
	b[1] = (m+2)/5;
	b[2] = (m+3)/5;
	b[3] = (m+4)/5;
	b[4] = m/5;
	/*for(i=0;i<5;i++)
		cout <<b[i]<<" ";*/
	for(i=0;i<5;i++)
		s+=(a[i]*b[i]);
	
	cout << s << endl;
}
//Dedicated to Aminul.

