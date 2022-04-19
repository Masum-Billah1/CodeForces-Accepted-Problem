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
const ll na = 1e18;
using namespace std;
int main(){
	IOS;
	int test=1;
	//cin >> test;
	while(test--){
		ll i,j,n,sz,mn=na;
		bool yes = 0;
		cin >> n;
		string s[n],t[n];
		ll a[n]={0};
		bool b[n]={0};
		for(i=0;i<n;i++){
			cin >> s[i];
			t[i]=s[i];
		}
		sz = s[0].size();
		for(i=1;i<n;i++){
			int te = sz;
			while(te--){
				yes = 0;
				if(s[i]==s[0]){
					yes = 1;
					break;
				}
				else{
					a[i]++;
					s[i]+=s[i][0];
					s[i].erase(s[i].begin()+0);
				}
			}
			if(yes == 0){
				cout << -1 << endl;
				return 0;
			}
		}
		int te = sz;
		while(te--){
			int tmp = 0;
			for(i=0;i<n;i++){
				cout << a[i]<<" ";
				tmp+=abs(a[i]);
				a[i]++;
				a[i]=a[i]%sz;
			}
			if(tmp<mn)mn = tmp;
			cout << endl;
		}
		cout<<mn<<endl; 
	}
}

