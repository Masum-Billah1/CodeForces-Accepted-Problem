#define ll long long int
#define na 100001
#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int seieve(){
	cout <<"sjfhduhu"<<endl;
	int i,j;
	int a[na]={0};
	for(i=2;i*i<=na;i++){
		for(j=2;i*j<=na;j++){
			a[i]=1;
		}
	}
	for(i=2;i<na;i++){
		if(a[i] == 0){
			prime.push_back(i);
		}
	}
}
int main(){
	int i;
	seieve();
	for(i=0;i<prime.size();i++){
		cout << prime[i]<<" ";
	}
}

