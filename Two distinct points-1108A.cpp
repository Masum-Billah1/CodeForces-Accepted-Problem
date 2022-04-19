#include<bits/stdc++.h>
using  namespace std;
int main(){
        int test;
        cin >> test;
        while(test--){
                int a,b,c,d;
                cin >> a >> b >> c >>d;
                if(a==c)
                        c = d;
                cout << a <<" "<<c <<endl;
        }
}
