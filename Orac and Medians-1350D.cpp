#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,k,yes=0,i,cnt=0;
		cin >> n >> k;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			if(i>0 && i<n-1 && a[i]==k)
				yes = 1;
			if(a[i]==k)
				cnt++;
		}
		if(cnt == n){
			cout <<"yes"<<endl;
			continue;
		}
		if(a[0]==k && a[1] > a[0]){
			yes = 1;
		}
		if(a[n-1]== k && (a[n-2] > a[n-1])){
			yes = 1;
		}
		if(yes == 1)
			cout <<"yes"<<endl;
		else
			cout <<"no"<<endl;
	}
}
//Dedicated to my mom.
