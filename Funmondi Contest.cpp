#include<iostream>
using namespace std;
int main()
{

    int n,q,i,k,j,v1,v2;
    cin>>n>>q;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for (j=1; j<=q; j++)
    {
        cin>>v1>>v2;
        k=0;
        if (a[v1-1]-1==0)
            k++;

        if (a[v2-1]+1==0)
            k++;

        cout<<n-k<<endl;

    }
    return 0;
}
