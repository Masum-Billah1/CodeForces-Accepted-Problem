//after completing triple century in codeforces,a question arrise...
//what can I do after being a programmer?...what is my work?....I can't know..
//However dedicated to Fiha,ankar,,aminul,,,srity & Rupa

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,a[10],i,l;
	cin >> test;
	while(test--){
		for(i=0;i<10;i++)
			cin >> a[i];
		a[0]++;
		l=0;
		for(i=1;i<10;i++){
			if(a[i]<a[l])
				l = i;
		}
		if(l == 0){
			cout <<1;
			for(i=0;i<a[l];i++)
				cout<<0;
			cout <<endl;
		}
		else{
			for(i=0;i<=a[l];i++){
				cout<<l;
			}
			cout <<endl;
		}
	}
}
