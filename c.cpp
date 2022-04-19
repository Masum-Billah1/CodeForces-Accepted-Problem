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
		int i,j,n,k,tmp=0,a[26]={0};
		cin >> n >> k;
		string s,t,m;
		cin >> s;
		char ch;
		for(i=0;i<n;i++)
			a[s[i]-'a']++;
		for(i=0;i<26;i++){
			tmp+=a[i];
			if(tmp >= k){
				m = 'a'+i;
				break;
			}
		}
		/*cout <<"m : "<<m<< endl;
		cout <<"a0 : "<<a[0]<<endl;*/
		for(i=0;i<26;i++){
			tmp = a[i]/k;
			while(tmp--){
				ch = 'a'+i;
				t+=ch;
			}
			if(a[i]%k!=0){
				a[i]=0;
				break;
			}
		}
		for(i=0;i<26;i++){
			if(a[i]!=0){
				ch = 'a'+i;
				break;
			}
		}
		t+=ch;
		cout << max(t,m)<<endl;
	}
}

