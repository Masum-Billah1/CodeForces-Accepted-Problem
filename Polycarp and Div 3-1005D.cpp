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
	int i,ans=0,sz,c=0,temp=0;
	string s,t;
	cin >> s;
	sz = s.size();
	for(i=0;i<sz;i++){
		temp = s[i]-'0';
		temp%=3;
		s[i]=temp+'0';
	}
	temp = 0;
	for(i=0;i<sz;i++){
		c++;
		temp+=s[i]-'0';
		if(s[i]=='0'||temp == 3 || c == 3){
			ans++;
			c = temp = 0;
		}
	}
	cout << ans << endl;
}
//Dedicated To Sumaiya Tasnim Fiha.
