#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,m = 0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cout <<m+a[i]<<" ";
        m = max(m,m+a[i]);
    }
}
