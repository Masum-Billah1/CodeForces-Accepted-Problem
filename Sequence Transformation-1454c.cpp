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
const int na = 2e5;
using namespace std;
int main(){
	IOS;
	int test=1;
	cin >> test;
	while(test--){
		int i,j,n,m,l=1,r,ans=10000000,in=0;
		cin >> n;
		r = n-1;
		int a[n];
		int b[n+1]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]=1;
		}
		for(i=0;i<=n;i++){
			if(b[i]==1)
				in++;
		}
		for(i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				l = i;
				break;
			}
		}
		for(i=n-2;i>0;i--){
			if(a[i]!=a[i+1]){
				r = i+1;
				break;
			}
		}
		/*cout <<"l : "<<l<<endl;
		cout <<"r : "<<r<<endl;*/
		for(i=l;i<r;i++){
			if(a[i]!=a[i-1]){
				b[a[i]]++;
			}
		}
		for(i=0;i<=n;i++){
			if(b[i]!=0){
				ans = min(ans,b[i]);
			}
		}
	    //cout <<"in : "<<in<<endl;
		if(in == 1)
			cout <<0<<endl;
		else if(l == r)
			cout <<1 <<endl;
		else
			cout << ans << endl;
	}
}

