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
		ll n,k,i,temp=0,big=0,cnt=0;
		cin >> n >> k;
		int a,b[n]={0};
		for(i=0;i<n;i++){
			cin >>a;
			if(a % k == 0)
				b[i] = 0;
			else
				b[i] = k-(a%k);
		}
		sort(b,b+n);
		for(i=0;i<n-1;i++){
			if(b[i]!=0){
				if(b[i]==b[i+1])
					cnt++;
				else if(temp <= cnt){
					temp = cnt;
					big = b[i];
					cnt = 0;
				}
				else
					cnt = 0;
			}
		}
		if(temp <= cnt){
			temp = cnt;
			big = b[i];
		}
		if(b[n-1] == 0)
			cout << 0 << endl;
		else
			cout << temp*k+big+1<<endl;
	}
}
//Dedicated To Sumaiya Tasnim Fiha.
