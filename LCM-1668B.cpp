#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,c=0,i;
	cin >> a;
	for(i=1;i*i<=a;i++){
		if(i*i == a)
			c++;
		else if(a%i==0){
			c+=2;
		}
	}
	cout << c << endl;
}
