#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,c,d,i;
	cin >> a >> b >> c >> d;
	if(a<c){
		swap(a,c);
		swap(b,d);
	}
	for(i=0;i<10000000;i++){
		long long int temp;
		temp = a*i+b;
		if(d <= temp && (temp-d) % c==0){
			cout << temp <<endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
