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
		int n,plus=0,minus=0,i,j,dif;
		cin >> n;
		int a[n],b[i];
		for(i=0;i<n;i++){
			cin >> a[i];
			if(a[i]<0)
				b[i]=-a[i];
			else
				b[i]=a[i];
		}
		for(i=0;i<n;i++)
			cout <<a[i]<<" ";
		cout << endl;
		
		sort(b,b+n);
		reverse(b,b+n);
		for(i=1;i<n;i++){
			cout << a[i]<<" "<<a[i-1]<<endl;
			dif = a[i]-a[i-1];
			cout <<"dif : "<<dif<<endl;
			if(dif > 0)
				plus++;
			else if(dif < 0)
				minus++;
		}
		plus = abs(plus-minus);
		cout <<"plus : "<<plus<<endl;
		for(i=0;i<plus;i++){
			for(j=0;j<n;j++){
				if(b[i]==abs(a[j])){
					a[j]=-a[j];
				}
			}
		}
		for(i=0;i<n;i++)
			cout << a[i]<<" ";
		cout << endl;
	}
}

