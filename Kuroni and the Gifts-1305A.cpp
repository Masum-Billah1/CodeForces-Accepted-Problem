#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n],b[n],i,j;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
            cout << a[i]<<" ";
        cout <<endl;
        for(i=0;i<n;i++)
            cout << b[i]<<" ";
        cout <<endl;
    }
}
