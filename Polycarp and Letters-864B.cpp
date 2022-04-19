#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[26]={0},s=0,i,l=0,j;
	string str;
	cin >> n >> str;
	for(i=0;i<n;i++){
		s=0;
		if(str[i]>='A' && str[i]<='Z'){
			for(j=0;j<26;j++){
				s=s+a[j];
			}
			if(s>l)
				l=s;
			for(j=0;j<26;j++){
				a[j]=0;
			}
		}
		else if(str[i]>='a' && str[i]<='z'){
			a[str[i]-'a']=1;
		}	
	}
	for(j=0;j<26;j++){
		s=s+a[j];
	}
	if(s>l)
		l=s;
	cout << l <<endl;
}
