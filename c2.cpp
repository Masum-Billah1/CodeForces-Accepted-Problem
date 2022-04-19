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
		int i,j,n,m=0;
		bool yes=1;
		cin >> n;
		int a[n];
		string s,t;
		cin >> s >> t;
		if(s[0]=='0')
			a[0]=-1;
		else
			a[0]=1;
		for(i=1;i<n;i++){
			if(s[i]=='0')
				a[i]=a[i-1]-1;
			else
				a[i]=a[i-1]+1;
		}
		for(i=n-1;i>=0;i--){
			if((m^(s[i]-'0'))!=(t[i]-'0')){
				if(a[i]==0){
					m = m^1;
				}
				else{
					yes = 0;
				}
			}
		}
		if(yes==1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}
