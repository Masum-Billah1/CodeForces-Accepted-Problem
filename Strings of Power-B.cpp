#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int first,last=0,i,j,l,heavy=0,metal=0;
	ll s=0;
	l = a.size();
	first = l;
	for(i=0;i<l-4;i++){
		if(a[i]=='h'&&a[i+1]=='e'&&a[i+2]=='a'&&a[i+3]=='v'&&a[i+4]=='y'){
			first = i;
			break;
		}
	}
	for(i=l-1;i>3;i--){
		if(a[i]=='l'&&a[i-1]=='a'&&a[i-2]=='t'&&a[i-3]=='e'&&a[i-4]=='m'){
			last = i;
			break;
		}
	}
	for(i=first;i<=last-4;i++){
		if(a[i]=='h'&&a[i+1]=='e'&&a[i+2]=='a'&&a[i+3]=='v'&&a[i+4]=='y'){
			heavy++;
			i = i+4;
		}
	}
	for(i=last;i>first+4;i--){
		if(a[i]=='l'&&a[i-1]=='a'&&a[i-2]=='t'&&a[i-3]=='e'&&a[i-4]=='m'){
			metal++;
			i = i-4;
		}
	}
	for(i=first;i<=last-4;i++){
		if(a[i]=='h'&&a[i+1]=='e'&&a[i+2]=='a'&&a[i+3]=='v'&&a[i+4]=='y'){
			s+=metal;
		}
		if(a[i]=='m'&&a[i+1]=='e'&&a[i+2]=='t'&&a[i+3]=='a'&&a[i+4]=='l'){
			metal--;
		}
	}
	cout << s << endl;
}
//Dedicated to Sumaiya Tasnim Fiha.

