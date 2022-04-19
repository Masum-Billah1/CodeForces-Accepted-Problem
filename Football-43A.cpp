#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=1,i;
	string str,s,temp;
	cin >> n >> str;
	
	for(i=1;i<n;i++){
		cin >> s;
		if(str == s)
			c++;
		else
			temp = s;
	}
	if(c > n-c)
	
		cout << str << endl;
	else
		cout << temp << endl;
}
