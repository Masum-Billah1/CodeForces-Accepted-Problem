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
const int na = 1e3;
using namespace std;
int main(){
	IOS;
	int i,j;
	int n = sqrt(na)+1;
	cout << "n : "<<n << endl;
	int a[n]={0};
	veci prime;
	for(i=2;i*i<n;i++){
		for(j=2;i*j<n;i++)
			a[i*j] = 1;
	}
	for(i=2;i<n;i++)
		if(a[i]==0) prime.pus(i);
		
	for(i=0;i<prime.size();i++)
		cout << prime[i]<<" ";
	int test;
	cin >> test;
	while(test--){
		
	}
}

