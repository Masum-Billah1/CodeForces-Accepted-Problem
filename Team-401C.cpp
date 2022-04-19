#include<bits/stdc++.h>
using namespace std;
int main(){
	int zero,one;
	cin >> zero >> one;
	if(zero-one > 1 || one-(zero*2)>2){
		cout << -1 << endl;
		return 0;
	}
	if(zero > one){
		while(1){
			cout << 0;
			zero--;
			if(zero == 0)
				break;
			cout << 1;
		}
	}
	else{
		while(zero!=one){
			cout << 11;
			one = one-2;
			if(one <= zero)
				break;
			cout << 0;
			zero--;
			
		}
		while(zero){
			cout<<0;
			zero--;
			if(one == 0)
				break;
			cout<<1;
			one--;
		}
	}
}
