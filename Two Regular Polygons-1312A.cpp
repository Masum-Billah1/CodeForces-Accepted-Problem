#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a,b;
        cin >> a >> b;
        if(a%b==0 && b!=2)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
}
