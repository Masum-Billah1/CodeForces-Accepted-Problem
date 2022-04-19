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
	int test;
	cin >> test;
	while(test--){
		int r,p,s,i,large,n;
		r = p = s = 0;
		string str;
		cin >> str;
		n = str.size();
		for(i=0;i<n;i++){
			if(str[i]=='R')
				r++;
			else if(str[i]=='P')
				p++;
			else
				s++;	
		}
		large = max(r,max(p,s));
		if(large == r){
			string c(n,'P');
			cout << c << endl;
		}
		else if(large == p){
			string c(n,'S');
			cout << c << endl;
		}
		else{
			string c(n,'R');
			cout << c << endl;
		}
	}
}

