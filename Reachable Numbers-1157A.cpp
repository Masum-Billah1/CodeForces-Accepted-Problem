#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0;
	cin >> n;
	if(n%10 == 0){
		n++;
		c++;
	}
	while(n){
		if(n<=9){
			c = c+9;
			break;
		}
		if(n%10==0)
			n/=10;
		else{
			c++;
			n++;
		}
	}
	cout << c << endl;
}
