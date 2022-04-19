#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,d,mnm,rslt,s=0;
	cin >> a >> b;
	d = abs(a-b);
	mnm = min(a,min(b,d));
    if(mnm == d){
        rslt = d;
        s = a + b-3*d;
        rslt = rslt + s/3;
    }
    else{
        rslt = mnm;
    }
    cout << rslt <<endl;
}

