#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int l,i,c=0,yes=0;
	l = a.size();
	for(i=l-1;i>=0;i--){
		if(a[i]=='0'){
			c++;
		}
		if(c>=6 && a[i]=='1')
			yes = 1;
	}
	if(yes == 1)
		cout << "yes" <<endl;
	else
		cout <<"no"<<endl;
}
