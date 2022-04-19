//dedicated to Sumaiya Tasnim Fiha
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long int a,b,digit,c=0;
		cin >> a >> b;
		long long int s;
		digit = log10(b);
		while(b){
			if(b%10==9){
				c++;
				b/=10;
			}
			else
				break;
		}
		if(c==digit+1)
			digit++;
		s = a*digit;
		cout << s <<endl;
	}
}
