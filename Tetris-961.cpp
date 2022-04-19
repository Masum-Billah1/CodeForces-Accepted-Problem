#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,k,c,j;
    cin >> n >> m;
    int a[m];
    k = m;
    for(i=0;i<m;i++)
        cin >> a[i];

    for(i=1;i<=n;i++){
            c=0;
        for(j=0;j<m;j++){
            if(a[j] == i)
                c++;
        }
        if(k>c)
            k = c;
    }
    cout << k <<endl;
}
