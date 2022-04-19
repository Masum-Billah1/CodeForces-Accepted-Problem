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
		int i,j,n,m,c=1,t=0;
		char b='2';
		cin >> n;
		veci v(n);
		string s;
		cin >> s;
		v[0]=1;
		for(i=1;i<n;i++){
			if(s[i-1]==s[i]){
				c++;
				if(b == s[i])
					t++;
				if(b == '2')
					b = s[i];
				v[i]=c+t;
			}
			else{
				c = 1;
				v[i] = c;
			}
		}
		cout << Max(v)<<endl;
		for(i=0;i<n;i++)
			cout << v[i]<<" ";
		cout << endl;
	}
}

