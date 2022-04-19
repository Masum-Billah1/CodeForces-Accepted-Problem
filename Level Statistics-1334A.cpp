#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,i,d1,d2;
        bool yes = 1;
        cin >> n;
        int p[n],c[n];
        for(i=0;i<n;i++){
            cin >> p[i] >> c[i];
        }
        for(i=1;i<n;i++){
            if(p[i] < p[i-1])
                yes = 0;
            if(c[i] < c[i-1])
                yes = 0;
            d1 = p[i]-p[i-1];
            d2 = c[i]-c[i-1];
            if(d2>d1)
                yes = 0;
        }
        if(yes == 1)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
}
