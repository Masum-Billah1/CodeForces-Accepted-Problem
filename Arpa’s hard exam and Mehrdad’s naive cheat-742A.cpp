#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[4]={6,8,4,2};
	cin >> n;
	if(n == 0){
		cout << 1 <<endl;
		return 0;
	}
	cout << a[n%4]<<endl;
}
