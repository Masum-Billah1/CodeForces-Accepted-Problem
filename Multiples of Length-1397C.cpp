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
		ll n,i,tmp;
		cin >> n;
		ll a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		if(n==1){
			cout <<1<<" "<<1<<endl;
			cout <<-a[0]<<endl;
			cout <<1<<" "<<1<<endl;
			cout << 0 << endl;
			cout <<1<<" "<<1<<endl;
			cout << 0 << endl;
		}
		else{
			cout <<n<<" "<<n<<endl;
			tmp = n-(a[n-1]%n);
			cout <<tmp<<endl;
			a[n-1]+=tmp;
			cout << 1<<" "<<n-1<<endl;
			for(i=0;i<n-1;i++){
				tmp = a[i]%n;
				cout <<tmp*(n-1)<<" ";
				a[i]+=tmp*(n-1);
			}
			cout <<endl<<1<<" "<<n<<endl;
			for(i=0;i<n;i++)
				cout <<-a[i]<<" ";
			cout << endl;
		}
	}
}

