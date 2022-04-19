#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,t,s;
    cin >>a >> b >> c >> d;
    t = min(a,d);
    t = min(t,c);
    s = t*256;
    a = a-t;
    t = min(a,b);
    s = s+t*32;
    cout << s <<endl;
}
