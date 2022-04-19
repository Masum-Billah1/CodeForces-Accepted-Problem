#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    for(i=0;i<n;i++){
            int sl = 0,sm=0;
        int l,m;
        cin >> l >> m;
        if(m%2==0)
            sm = m/2;
        else
            sm = -(m+1)/2;
        l--;
        if(l%2==0)
            sl = l/2;
        else
            sl = -(l+1)/2;
        cout << sm-sl<<endl;
    }
}
