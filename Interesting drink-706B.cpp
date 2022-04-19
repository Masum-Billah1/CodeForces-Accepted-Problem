#include<bits/stdc++.h>
using namespace std;
int b[100001];
int main(){
	int n,i,c=0,t=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){
		c++;
		b[a[i]-1]=c;	
	}
	for(i=0;i<100001;i++){
		if(b[i]!=0)
			t = b[i];
		else
			b[i]=t;
	}
	int test;
	cin>> test;
	while(test--){
		int m;
		cin >> m;
		if(m>=a[n-1])
			cout << n <<endl;
		else
	 		cout << b[m-1]<<endl;
	}
}
