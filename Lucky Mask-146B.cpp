#include<bits/stdc++.h>
int LuckeyDigit(int a){
	int d=0,i,mod,c=1;
	while(a){
		mod=a%10;
		if(mod == 4 || mod == 7){
			d =d+mod*c;
			c=c*10;
		}
		a/=10;
	}
	return d;
}
using namespace std;
int main(){
	int a,b,c,i;
	cin >> a >> b;
	if(a<b){
		cout << b<<endl;
		return 0;
	}
	for(i=a+1;;i++){
		c = LuckeyDigit(i);
		if(c == b){
			cout << i <<endl;
			return 0;
		}
	}
	
}
