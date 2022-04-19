#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,i;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int t = a[0];
        for(i=0;i<n;i++){
            a[i]=a[i]-t;
        }
        for(i=0;i<n;i++){
            if(a[i]%2==1)
                break;
        }
        if(i==n)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
}
