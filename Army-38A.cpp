#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,i;
        cin >> n;
        int a[n-1];
        for(i=0;i<n-1;i++)
                cin >>a[i];
        int b,c,s=0;
        cin >> b >> c;
        for(i=b-1;i<c-1;i++)
                s = s+a[i];
        cout << s <<endl;
}
