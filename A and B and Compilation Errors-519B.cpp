#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int a[n],b[n-1],c[n-2];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n-1;i++)
        cin >> b[i];
    for(i=0;i<n-2;i++)
        cin >> c[i];
    sort(a,a+n);
    sort(b,b+(n-1));
    sort(c,c+(n-2));

    for(i=0;i<n;i++)
        cout <<a[i]<<" ";
        cout <<endl;
//    for(i=0;i<n-1;i++)
//        cout <<b[i]<<" "<;
//        cout <<endl;
//    for(i=0;i<n-2;i++)
//        cout <<c[i]<<" "<;
//        cout <<endl;

}
