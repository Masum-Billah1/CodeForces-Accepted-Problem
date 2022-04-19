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
		int i,j,k,n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<m;i++)
			cin >> b[i];
		for(i=0;i<=512;i++){
			int cnt = 0;
			for(j=0;j<n;j++){
				for(k=0;k<m;k++){
					int ci = a[j]&b[k];
					if((ci|i)==i){
						cnt++;
						break;
					}
				}
			}
			if(cnt==n){
				cout << i << endl;
				return 0;
			}
		}
	}
}

