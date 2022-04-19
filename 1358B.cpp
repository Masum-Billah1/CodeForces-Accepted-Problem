#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,c=0,i;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i--){
			if(a[i]>i+1)
				c++;
			else
				break;
		}
		cout << n-c+1<<endl;
	}
}

