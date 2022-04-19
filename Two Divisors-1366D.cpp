#define ll long long
#define na 10000001
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
int a[na];
using namespace std;
int main(){
	IOS;
	int i,j;
	for(i=2;i<=na;i++){
		if(a[i]== 0){
			for(j=1;i*j<=na;j++){
				a[i*j] = i;
			}
		}
	}
	/*for(i=0;i<=na;i++)cout <<a[i]<<" ";
		cout << endl;*/
		
	int n,mxp;
	cin >> n;
	int c[n],d[n],in,multi;
	for(i=0;i<n;i++){
		c[i] = d[i]=-1;
		multi = 1;
		cin >> in;
		mxp = a[in];
		while(in%mxp==0){
			in/=mxp;
			multi*=mxp;
		}
		if(in != 1){
			c[i] = in;
			d[i] = mxp;
		}
	}
	for(i=0;i<n;i++)cout <<c[i]<<" ";
		cout << endl;
	for(i=0;i<n;i++)cout <<d[i]<<" ";
		cout << endl;
}

