#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j=0;
    cin >> n >>k;
    int a[101],d[101]= {0},b[101],c=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        d[a[i]]++;
        if(d[a[i]]==1){
            b[c]=i+1;
            c++;
        }
    }
    if(c>=k)
    {
        cout <<"YES"<<endl;
        for(i=0; i<k; i++)
            cout << b[i]<<" ";
    }
    else
        cout <<"NO"<<endl;
}
