#define	ll    long long
#define  seti  set<int>
#define  setl  set<ll>
#define  veci  vector<int>
#define  vecl  vector<ll>
#define  Min(v)   *min_element(v.begin(),v.end())
#define  Max(v)   *max_element(v.begin(),v.end())
#define  IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int n,i,x,s=0,result,dif=0;
	cin >> n;
	veci a(n);
	for(i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
	}
	result = s;
	int mn = Min(a);
	for(i=0;i<n;i++){
		dif = 0;
		for(x = 1;x<=a[i]/2;x++){
			if(a[i]%x == 0){
				int temp = a[i]+mn;
				int temp2 = a[i]/x+mn*x;
				//cout <<temp-temp2<<endl;
				dif = max(dif,temp-temp2);
			}
		}
		result = min(result,s-dif);
	}
	cout << result << endl;
}

