#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
	string str;
	int one = 0,zero= 0,l,i;
	cin >> str;
	l = str.size();
	for(i=0;i<l;i++){
		if(str[i]=='0')
			zero++;
		else
			one++;
	}
	if(zero==0||one == 0){
		cout << str;
	}
	else
		for(i=0;i<l;i++){
			cout <<10;
		}
	cout << endl;
}
		
}
