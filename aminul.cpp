#include<bits/stdc++.h>
using namespace std;
#define size 1000001
int a[size];


void sieve()
{
    int i,root,j;
    for(i=2; i<size; i++)
    {
        a[i]=1;
    }

    root=sqrt(size);
    for(i=2; i<=root; i++)
    {
        if(a[i])
        {
            for(j=2; i*j<=size; j++)
            {
                a[i*j]=0;
            }
        }
    }
}


void solve()
{
    int n,rt,i;
    cin>>n;
    vector<long long int>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];

    sieve();

    for(i=0; i<n; i++)
    {
        rt = sqrt(v[i]);
        if( rt*rt==v[i] && a[rt] )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    int test;
    cin >>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
