#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,large=1,a=0,b=0,i;
	cin >> n >> k;
	string str;
	cin >> str;
	for(i=0;i<n;i++){
		if(str[i]=='a' &&  str[i-1]=='b'&&a==k)
			a = 0;
		else if(str[i]=='b' && str[i-1]=='a'&&b == k)
			b = 0;
		if(str[i]=='a'){
			a++;
		}
		else{
			b++;
		}
		if(a>k && b>k){
			if(str[i] == 'a')
				b = k;
			else
				a = k;
		}
		cout <<"a : "<<a<<" b : "<<b;
		large = max(large,a+b);
		cout << " large : "<<large<<endl;
	}
	cout << large << endl;
}
