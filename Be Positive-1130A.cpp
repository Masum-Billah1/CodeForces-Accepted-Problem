#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,positive=0,negative=0,zero=0,i,t;
	cin >> n;
	t = ceil(n/2.0);
	int a;
	for(i=0;i<n;i++){
		cin >> a;
		if(a>0)
			positive++;
		else if(a<0)
			negative++;
		else
			zero++;
	}
	if(positive>=t)
		cout << 1 << endl;
	else if(negative>=t)
		cout <<-1 <<endl;
	else
		cout << 0 << endl;
}
