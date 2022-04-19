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
		int i,j,n,t0=1,t1=1,ans=0,np;
		cin >> n;
		int a[n];
		veci pos0,pos1;
		string s;
		cin >> s;
		for(i=0;i<n;i++){
			np = pos0.size()+pos1.size(); 
			if(s[i]=='0'){
				if(pos1.size()==0){
					a[i]=np;
					pos0.pus(np);
					ans = max(ans,np);
				}
				else{
					np = pos1.back();
					pos1.pop();
					pos0.pus(np);
					a[i]=np;
					ans = max(ans,np);
				}
			}
			else{
				if(pos0.size()==0){
					a[i]=np;
					pos1.pus(np);
					ans = max(ans,np);
				}
				else{
					np = pos0.back();
					pos0.pop();
					pos1.pus(np);
					a[i]=np;
					ans = max(ans,np);
				}
			}
		}
		cout <<ans+1 << endl;
		for(i=0;i<n;i++)
			cout << a[i]+1<<" ";
		cout << endl;
	}
}

