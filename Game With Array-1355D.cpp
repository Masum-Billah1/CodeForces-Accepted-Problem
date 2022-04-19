#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,i;
	cin >> n >> s;
	if(s/2<n)
		cout <<"NO"<<endl;
	else{
		cout <<"YES"<<endl;
		for(i=1;i<n;i++){
			cout << 2 <<" ";
			s-=2;
		}
		cout << s << endl;
		cout << 1 << endl;
	}
}
//Dedicated to Sumaiya Tasnim Fiha
