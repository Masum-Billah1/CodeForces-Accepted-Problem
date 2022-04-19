#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0,i,d=6,main=6,n;
	cin >> n;
	for(i=2;i<n;i++,d+=2){
		s+=main;
		main+=d;
	}
	cout << s << endl;
}
//Dedicated to ankar,aminul...
