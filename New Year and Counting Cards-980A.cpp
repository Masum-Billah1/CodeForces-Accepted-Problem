#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int i,c=0;
	for(i=0;i<a.size();i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			c++;
		else if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9')
			c++;
	}
	cout << c <<endl;
}
