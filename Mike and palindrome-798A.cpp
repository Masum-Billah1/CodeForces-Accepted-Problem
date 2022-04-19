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
		int n,i,c=0;
		string str;
		cin >> str;
		n = str.size();
		for(i=0;i<n/2;i++){
			if(str[i]!=str[n-i-1])
				c++;
		}
		if(c==0 && n%2)
			cout <<"YES"<<endl;
		else if(c==1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}

