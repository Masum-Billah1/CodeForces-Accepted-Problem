#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,a,b,c,d,temp1,temp2,cnt = 1,lp,hp;
		cin >> n >> a >> b >> c >> d;
		temp1 = n*(a-b);
		temp2 = n*(a+b);
		lp = c-d;
		hp = c+d;
		if(temp1 > hp)
			cnt = 0;
		if(temp2 < lp)
			cnt = 0;
			
		if(cnt == 0)
			cout <<"NO"<<endl;
		else
			cout <<"YES"<<endl;
	}
}
