#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a11=0,a12=0,a21=0,a22=0,i,l,a1,a2;
		string a;
		cin >> a;
		l = a.size();
		for(i=0;i<l;i++){
			if(a[i]=='1')
				a11--;
			else
				break;
		}
		for(i=l-1;i>=0;i--){
			if(a[i]=='1')
				a12--;
			else
				break;
		}
		for(i=0;i<l;i++){
			if(a[i]=='0')
				a21--;
			else
				break;
		}
		for(i=l-1;i>=0;i--){
			if(a[i]=='0')
				a22--;
			else
				break;
		}
		//cout <<"a11 : "<<a11<<" a12 :"<<a12<<endl;
		a1 = min(a11,a12);
		a2 = min(a21,a22);
		for(i=0;i<l;i++){
			if(a[i]=='0')
				a2++;
			else
				a1++;
		}
		cout << min(a1,a2)<<endl;
	}
}

