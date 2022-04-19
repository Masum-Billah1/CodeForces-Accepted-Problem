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
		int i,j,n,m,mx=0,temp=0,ago;
		ll cnt=0;
		cin >> n;
		int a[n],b[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n;i++){
			mx = max(a[i],mx);
			b[i] = mx-a[i];
		}
		for(i=n-1;i>=0;i--){
			if(b[i]>temp){
				cnt+=(b[i]-temp);
			}
			temp = b[i];
		}
		cout <<cnt << endl;
	}
}

