#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double a,b,c,d,k,s;
        cin >> a >> b >> c >> d >> k;
        s = ceil(a/c)+ceil(b/d);

        if(s > k)
            cout << -1 <<endl;
        else
            cout << ceil(a/c) <<" "<< ceil(b/d) <<endl;
    }
}
