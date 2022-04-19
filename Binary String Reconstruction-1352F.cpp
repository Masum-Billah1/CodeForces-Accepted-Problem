#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,i;
	cin >> test;
	while(test--){
		string str;
		int a,b,c;
		cin >> a >> b >> c;
		if(b==0 && c == 0)
			str+='0';
		else if(b == 0 && a == 0)
			str+='1'; 
		b++;
		for(i=0;i<b/2;i++){
			str+='0';
			str+='1';
		}
		for(i=0;i<a;i++){
			str = '0'+str;
		}
		for(i=0;i<c;i++){
			str+='1';
		}
		if(str.size()==a+b-1+c)
			str+='0';
		cout << str << endl;
	}
}
