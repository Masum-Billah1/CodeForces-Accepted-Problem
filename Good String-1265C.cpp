#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0,j=0,i;
	cin >> n;
	string s,a;
	cin >> s;
	for(i=1;i<n;i++){
		if(s[j]!=s[i]){
			a+=s[j];
			a+=s[i];
			i++;
			j=i;
		}
	}
	cout << n-a.size() <<endl;
	cout << a <<endl;
}
