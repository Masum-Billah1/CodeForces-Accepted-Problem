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
		int i,j,n,m,a[26]={0},b[26]={0},cnt=0;
		cin >> n;
		string str;
		cin >> str;
		for(i=0;i<str.size();i++){
			a[str[i]-'a']=1;
		}
		for(i=0;i<26;i++){
			cnt += a[i];
		}
		if(cnt >= n){
			cout <<"YES"<<endl;
			int c = 0;
			b[str[0]-'a'] = 1;
			for(i=0;i<str.size();i++){
				if(b[str[i]-'a']==0 && c+1<n){
					c++;
					cout << endl;
					b[str[i]-'a']=1;
				}
				cout << str[i];
			}
		}
		else
			cout <<"NO"<<endl;
	}
}

