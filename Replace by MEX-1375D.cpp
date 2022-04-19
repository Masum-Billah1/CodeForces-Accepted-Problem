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
	int test;
	cin >> test;
	while(test--){
		veci v;
		int n,i,j,un=0,mex;
		cin >> n;
		int a[n],c[n+1]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			c[a[i]]++;
		}
		while(1){
			int cnt = 0;
			/*for(i=0;i<n;i++)
				cout << a[i]<<" ";
			cout << endl;*/
			for(i=0;i<=n;i++){
				if(i < n && a[i]==i)
					cnt++;
				else{
					un = i;
					break;
				}
			}
			if(cnt==n)
				break;
			for(j=0;j<=n;j++){
				if(c[j] == 0){
					mex = j;
					break;
				}
			}
			//cout <<"mex : "<<mex<<endl;
			if(mex != n){
				v.pus(mex+1);
				c[a[mex]]--;
				c[mex]++;
				a[mex] = mex;
			}
			else{
				v.pus(un+1);
				c[n]++;
				c[a[un]]--;
				a[un] = n;
			}
		}
		cout << v.size()<<endl;
		for(i=0;i<v.size();i++)
			cout << v[i]<<" ";
		cout << endl;
	}
}

