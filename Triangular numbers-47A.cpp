#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,s=0;
	cin >> n;
	for(i=1;s<n;i++){
		s+=i;
		if(s==n){
			cout << "YES" << endl;
			return 0;
		}			
	}
	cout <<"NO"<<endl;
}

