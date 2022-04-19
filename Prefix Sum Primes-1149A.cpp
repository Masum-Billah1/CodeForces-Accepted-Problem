#define	ll    long long
#define  seti  set<int>
#define  setl  set<ll>
#define  veci  vector<int>
#define  vecl  vector<ll>
#define  IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int n,a[3]={0};
	cin >> n;
	int b,i;
	for(i=0;i<n;i++){
		cin >> b;
		a[b]++;
	}
	if(a[2]>0){
		a[2]--;
		cout << 2 <<" ";
	}
	if(a[1]>0){
		a[1]--;
		cout << 1 <<" ";
	}
	for(i=0;i<a[2];i++)
		cout << 2 <<" ";
	for(i=0;i<a[1];i++)
		cout << 1 << " "; 
	cout << endl;	
}

