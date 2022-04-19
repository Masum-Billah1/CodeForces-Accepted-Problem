#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,minus=0,zero=0;
	long long int s=0;
	cin >> n;
	int a;
	for(i=0;i<n;i++){
		cin >> a;
		if(a>0){
			s = s+a-1;
		}
		else if(a==0){
			zero++;
			s++;
		}
		else{
			s=s-a-1;
			minus++;
		}
	}
	if(minus%2==1 && zero==0)
		s=s+2;
	cout << s <<endl;
}
