#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,s1;
    int b1,b2,s2;
    cin >> a1 >>a2;
    cin >> b1 >> b2;
    s1 = abs(a1-b1);
    s2 = abs(a2-b2);
    if(s1>s2)
        cout << s1 <<endl;
    else
        cout << s2 <<endl;
}
