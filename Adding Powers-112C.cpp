#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,i;
    cin >> test;
    while(test--){
        int n,k,c=0;
        cin >> n >>k;
        int a[n];

        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);

        for(i=0;i<n;i++){
            if(a[i]==a[i-1]&&i>=1&&a[i]!=0)
                continue;
           else if(a[i]==0 ||a[i]==1||a[i]==k)
                c++;
            else
                for(;a[i]>k;a[i]=a[i]/k){
                        cout << a[i]<<endl;
                    if(a[i]==k){
                        c++;
                        break;
                    }
                }
        }
            if(c==n)
                cout <<"YES"<<endl;
            else
                cout <<"NO"<<endl;
    }
}
