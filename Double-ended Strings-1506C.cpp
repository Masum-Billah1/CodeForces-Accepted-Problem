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
		int i,j,k,s=0,t=0,l1,l2,ans=0;
		string a,b;
		cin >> a >> b;
		if(a.size()>b.size())
			swap(a,b);
		l1 = a.size();
		l2 = b.size();
		for(i=1;i<=l1;i++){
			for(j=0;j<=l1-i;j++){
				for(k=0;k<=l2-i;k++){
					if(a.substr(j,i)==b.substr(k,i))
						ans = max(ans,i);
				}
			}
		}
		cout << l1+l2-ans*2 << endl;
	}
}

