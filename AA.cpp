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
int sz;
string cmp = "abacaba";
int count(string s){
	int cnt = 0;
	for(int i=0;i<sz-6;i++){
		if(s.substr(i,7)==cmp)
			cnt++;
	}
	return cnt;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,j;
		bool yes = 0,c;
		string s,t;
		cin >> n >> s;
		sz = s.size();
		if(count(s)==1){
			for(i=0;i<sz;i++)
				if(s[i]=='?')
					s[i]='q';
			cout <<"Yes"<<endl;		
			cout << s << endl;
			continue;
		}
		if(count(s)>1)
			yes = 0;
		for(i=0;i<sz-6;i++){
			c = 1;
			t = s;
			for(j=i;j<i+7;j++){
				if(s[j] != cmp[j-i] && s[j] != '?'){
					c = 0;
					break;
				}	
				else if(s[j]=='?'){
					t[j] = cmp[j-i];
				}
			}
			if(count(t)==1){
				yes = 1;
				s = t;
				break;
			}
		}
		for(i=0;i<sz;i++){
			if(s[i]=='?')
				s[i]='q';
		}
		if(yes == 1){
			cout <<"Yes"<<endl;
			cout << s << endl;
		}
		else 
			cout <<"No"<<endl;
	}
}
