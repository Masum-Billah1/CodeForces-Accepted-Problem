#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            for(i=0;i<(n/2);i++)
                cout << 1;
        }
        else
        {
            cout << 7;
            n = n-3;
            for(i=0;i<(n/2);i++)
                cout << 1;
        }
        cout << endl;
    }
}
