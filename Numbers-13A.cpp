#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,i,s = 0,t,gcd,a,b;
        cin >> n;
        for(i=2;i<n;i++){
                t =n;
                while(t){
                        s = s+(t%i);
                        t = t/i;
                }
        }
        a = n-2;
        b = s;
        while(a){
                gcd = a;
                a = b%a;
                b = gcd;
        }
        printf("%d/%d\n",s/gcd,(n-2)/gcd);
}
