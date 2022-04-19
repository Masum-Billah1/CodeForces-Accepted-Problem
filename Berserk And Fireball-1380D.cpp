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
		veci v;
		int i,j=0,n,m,c=0,x,k,y;
		bool yes = 1;
		cin >> n >> m;
		cin >> x >> k >> y;
		int a[n],b[m];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<m;i++)
			cin >> b[i];
		for(i=0;i<m;i++){
			while(b[i]!=a[j])
				j++;
			if(b[i] == a[j]){
				v.pus(j);
				c++;
			}
			if(j>=n)
				break;
		}
		if(c != m)
			yes = 0;
		for(i=0;i<v.size();i++)
			cout << v[i]<<" ";
		
	}
}

