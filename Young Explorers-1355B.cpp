#define ll long long int
#define na 200001
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,s=0,temp=0,b;
		cin >> n;
		int a[n+1]={0};
		for(i=0;i<n;i++){
			cin >> b;
			a[b]++;
		}
		for(i=1;i<=n;i++){
			temp+=a[i];
			a[i]=temp;
		}
		temp=0;
		for(i=1;i<=n;i++){
			a[i]-=temp;
			s+=a[i]/i;
			temp +=(a[i]/i)*i;
		}
		cout << s << endl;
	}
}

