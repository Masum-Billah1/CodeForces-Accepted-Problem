#include<bits/stdc++.h>
using namespace std;
int main(){
        int  n,m,s = 0;
        cin >> n >> m;
        if(m>n){
                while(m!=n){
                        if(m%2==0 && m>n){
                                m=m/2;
                        }
                        else
                                m++;
                        s++;
                }
        }
        else
                s = n-m;
        cout << s <<endl;
}
