#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l=0,s=0,i,c=0;
	cin >>n;
	string a;
	cin >> a;
	for(i=0;i<n;i++){
		if(a[i]=='('){
			while(a[i]!=')'){
				i++;
				if((a[i]>='a' && a[i]<='z'||a[i]>='A'&&a[i]<='Z')&&a[i-1]=='('){
					s++;
				}
				else if((a[i]>='a' && a[i]<='z'||a[i]>='A'&&a[i]<='Z')&& a[i-1]=='_')
					s++;
			}
		}
		if(a[i]>='a' && a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			c++;
		else{
			if(c>l)
				l = c;
			c=0;	
		}
	}
	if(c>l)
		l = c;
	cout << l <<" "<<s <<endl;
	
}
