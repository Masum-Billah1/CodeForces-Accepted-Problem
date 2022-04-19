#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,m,i,s = 0;
        cin >> n >> m;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            s = s+a[i];
        }
        if(s>= m)
            cout << m <<endl;
        else
            cout << s <<endl;
    }
}
