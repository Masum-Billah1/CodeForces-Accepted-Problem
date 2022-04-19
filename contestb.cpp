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
		string s;
		int c=0,one=0,zero=0;
		cin >> s;
		int l = s.size();
		for(int i=0;i<l;i++){
			if(s[i]=='1'){
				if(zero>0){
					c++;
					zero--;
				}
				else
					one++;
			}
			else{
				if(one>0){
					c++;
					one--;
				}
				else
					zero++;
			}
		}
		if(c%2)
			cout <<"DA"<<endl;
		else
			cout <<"NET"<<endl;
	}
}

