#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int l,result,one=0,i;
	l = s.size();
	result = ceil(l*1.0/2.0);
	for(i=1;i<l;i++){
		if(s[i]=='1')
			one++;
	}
	if(one == 0 && l%2==1)
		cout << result-1<<endl;
	else
		cout << result <<endl;
}
