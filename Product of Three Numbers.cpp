#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,i;
	cin >> test;
	while(test--){
		int n,a[2]={0},c=0;
		cin >> n;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				a[c]=i;
				n/=i;
				c++;
				if(c == 2)
					break;
			}
		}
		if(a[0]!=n && a[1]!=n && c == 2){
			cout <<"YES"<<endl;
			cout << a[0]<<" "<<a[1]<<" "<<n<<endl;
		}
		else
			cout <<"NO"<<endl;
	}
}

