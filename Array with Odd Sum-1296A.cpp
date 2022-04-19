#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,i,s=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            s = s+i;
        }

        if(s%2 == 0)
            cout <<"NO"<<endl;
        else
            cout <<"YES"<<endl;
    }
}
