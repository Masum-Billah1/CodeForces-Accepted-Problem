#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,i;
	cin >>a>>b;
	cout <<"YES"<<endl;
	for(i=a;i<b;i=i+2){
		cout << i <<" "<<i+1<<endl;
	}
}
