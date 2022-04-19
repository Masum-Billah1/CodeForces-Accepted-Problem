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
		int n,i,j,temp,temp1,temp2;
		bool b = 0,t1=0,t2=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=1;i<=n;i++){
			t1 = t2 = 0;
			temp1 = temp2 = 0;
			//cout <<"i : "<<i<<endl;
			for(j=0;j<n;j++){
				if(a[j]==i){
					temp = j;
					break;
				}
			}
			//cout << "temp : "<<temp<<endl;
			for(j=0;j<temp;j++){
				if(a[j]<i){
					temp1 = j;
					t1 = 1;
					break;
				}
			}
			for(j=temp+1;j<n;j++){
				if(a[j]<i){
					temp2 = j;
					t2 = 1;
					break;
				}
			}
			if(t1 && t2){
				b = 1;
				break;
			}
		}
		if(b == 1){
			cout <<"YES"<<endl;
			cout << temp1+1 <<" "<<temp+1<<" "<<temp2+1<<endl;
		}
		else
			cout <<"NO"<<endl;
	}
}

