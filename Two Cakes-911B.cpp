#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,temp,large=0,i;
	cin >> n >> a >> b;
	for(i=1;;i++){
		temp = ((a/i)+(b/i));
		if(temp >= n && a/i!=0 && b/i != 0)
			large = i;
		else
			break;
	}
	cout << large << endl;
}
