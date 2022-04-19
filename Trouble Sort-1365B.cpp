#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
int main(){
	IOS;
	int test,i;
	cin >> test;
	while(test--){
		int n;
		bool issort = 1, one=0,zero=0;
		cin >> n;
		int a[n],b[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			if(i>0 && a[i-1] > a[i])
				issort = 0;
		}
		for(i=0;i<n;i++){
			cin >> b[i];
			if(b[i]==0)
				zero = 1;
			else
				one = 1;
		}
		if(issort == 1 ||(zero == 1 && one == 1))	
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}
//Dedicated To Sumaiya Tasnim Fiha.
