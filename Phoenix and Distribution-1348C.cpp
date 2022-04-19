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
		int n,k,i;
		cin >> n >> k;
		string s;
		cin >> s;
		sort(s.begin(),s.end());
		if(s[0]!=s[k-1])
			cout << s[k-1]<<endl;
		else{
			cout <<s[0];
			if(s[k]!=s[n-1]){
				for(i=k;i<n;i++)
					cout <<s[i];
			}
			else{
				for(i=k;i<n;i+=k)
					cout <<s[i];
			}
			cout << endl;
		}
	}
}

