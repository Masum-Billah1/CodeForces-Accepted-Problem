#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,i=0;
    cin >> a >>b >>c;
    for(i=0;i<10000;i++){
        a = a*10;
        d = a/b;
        if(d == c){
            break;
        }
        if(a>=b)
            a = a%b;
    }
    if(i != 10000)
        cout << i+1 <<endl;
    else
        cout << -1 <<endl;
}
