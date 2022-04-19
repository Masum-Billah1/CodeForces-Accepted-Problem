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
		int n,k,temp,cl,fl,rs,i,j;
		cin >> n >> k;
		cl = ceil((k*1.0)/n);
		fl = k/n;
		rs = (cl-fl)*(cl-fl)*2;
		temp = k-(n*fl);
		//cout <<"temp : "<<temp<<endl;
		cout << rs << endl;
		for(i=0;i<temp;i++){
			string s(n,'0');
			for(j=0;j<cl;j++){
				s[(i+j)%n]='1';
			}
			cout << s<<endl;
		}
		for(i=temp;i<n;i++){
			string s(n,'0');
			for(j=0;j<fl;j++){
				s[(i+j)%n]='1';
			}
			cout << s << endl;
		}
	}
}
//Dedicated to Sumaiya
