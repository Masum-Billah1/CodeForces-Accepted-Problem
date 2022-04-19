#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n],c[n+1],result[n]={0},in,i;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++){
		cin >> b[i];
		c[b[i]]=i;
	}
	for(i=0;i<n;i++){
		in = c[a[i]];
		if(in == i)
			a[i]=0;
		else if(i < in)
			a[i]=i+n-in;
		else
			a[i]=i-in;
	}
	for(i=0;i<n;i++){
		result[a[i]]++;
	}
	for(i=1;i<n;i++){
		result[0]=max(result[i],result[0]);
	}
	cout << result[0]<<endl;
}
//Dedicated To Sumaiya Tasnim Fiha.
