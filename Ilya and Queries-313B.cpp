#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int l = str.size(),c=0,i;
	int a[l+1];
	for(i=0;i<l-1;i++){
		if(str[i]==str[i+1])
			c++;
	}
	a[1]=c;
	for(i=2;i<l;i++){
		if(str[i-2]==str[i-1])
			c--;
		a[i]=c;
	}
	a[l]=0;
	int n;
	cin >> n;
	while(n--){
		int li,ri;
		cin >> li >> ri;
		cout << a[li]-a[ri]<<endl;
	}
}
//dedicated to Sumaiya Tasnim Fiha.
