#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	string str,tmp;
	char ch;
	for(i=1;i<=n;i++){
		char ch = i+'0';
		str = str+ch+str;
		cout << str.size() <<endl;
	}
}
