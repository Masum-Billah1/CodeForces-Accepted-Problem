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
		int n,i,sum=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		sum-=a[n-1];
		int tmp = sum;
		sum+=min(sum,a[n-1]);
		if(sum%2 == 0 && tmp<a[n-1])
			sum++;
		//cout <<"sum : "<<sum<<endl;
		if(sum%2)
			cout <<"T"<<endl;
		else
			cout <<"HL"<<endl;
	}
}

