#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,c=0,large=0,a=0,b=0,i;
	cin >> n >> k;
	string str;
	cin >> str;
	for(i=0;i<n;i++){
		if(str[i]=='a')
			a++;
		else
			b++;
		if(a<=k || b<=k){
			large = max(large,(a+b));
		}
		else{
			if(str[c] == 'a')
				a--;
			else
				b--;
			c++;
		}
	}
	cout << large << endl;
}
