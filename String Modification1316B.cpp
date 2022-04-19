#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,t,j=0,te;
        cin >> n;
        string s;
        cin >> s;
        char temp = s[0];
        t = 1;
        for(int i = 1;i<n;i++){
            if(s[i]<=temp){
                temp = s[i];
                t = i+1;
            }
        }
        te = t;
        string b;
        for(;t<n;t++,j++){
            b[j]=s[t];
        }
        if(j%2 == 0){
            for(;te>=0;te--,j++)
            {
                b[j] = s[te];
            }
            b[j]='\0';
        }
        else
        {
            for(;te>=0;te--,n--)
            {
                b[n-1] = s[te];
            }
            b[n]='\0';
        }
        cout << b <<endl;
    }
}
