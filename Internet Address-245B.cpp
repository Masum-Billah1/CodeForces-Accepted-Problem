#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,l,t,ru;
	string a;
	cin >> a;
	l = a.size();
	if(a[0]=='h'){
		cout <<"http://";
		t=4;
	}
	else{
		cout <<"ftp://";
		t=3;
	}
	for(i=l;i>t;i--){
		if(a[i]=='u'&&a[i-1]=='r'){
			ru=i-1;
			break;
		}
	}
	for(i=t;i<ru;i++){
		cout << a[i];
	}
	cout <<".ru";
	if(ru+2 != l){
		cout <<'/';
		for(i=ru+2;i<l;i++)
			cout << a[i];
	}
	cout << endl;
}
