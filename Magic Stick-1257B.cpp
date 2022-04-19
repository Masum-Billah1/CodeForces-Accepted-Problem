#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x >= y)
            cout <<"YES"<<endl;
        else if(x == 1 || x == 3)
            cout <<"NO"<<endl;
        else if(x == 2 && y!=3)
            cout <<"NO"<<endl;
        else
            cout <<"YES"<<endl;

    }
}
