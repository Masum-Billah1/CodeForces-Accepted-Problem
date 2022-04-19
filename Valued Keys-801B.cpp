#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >>b;
	int l,i;
	l = a.size();
	for(i=0;i<l;i++){
		if(a[i]<b[i]){
			cout <<-1 <<endl;
			return 0;
		}
	}
	cout << b <<endl;
}
