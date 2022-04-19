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
int cheak(string s,string sc,int sz){
	int r = 0;
	while(sz--){
		if(s==sc){
			return r;
		}
		else{
			r++;
			s+=s[0];
			s.erase(s.begin()+0);
		}
	}
	return -1;
}
string modify(string s,int sz){
	s+=s[0];
	s.erase(s.begin()+0);
	return s;
}
int main(){
	IOS;
	int test=1;
	//cin >> test;
	while(test--){
		int i,j,n,m,mn=100000000;
		cin >> n;
		string str[n],tmp;
		for(i=0;i<n;i++)
			cin >> str[i];
		m = str[0].size();
		for(i=1;i<n;i++){
			if(cheak(str[i],str[0],m)==-1){
				cout << -1 <<endl;
				return 0;
			}
		}
		tmp = str[0];
		for(i=0;i<m;i++){
			int sum = 0;
			for(j=0;j<n;j++){
				sum+=cheak(str[j],tmp,m);
			}
			mn = min(mn,sum);
			tmp = modify(tmp,m);
		}
		cout << mn << endl;
	}
}

