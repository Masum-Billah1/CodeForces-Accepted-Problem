#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,s,t,i,j;
    cin >> t;
    int c[t];
    for(i=0;i<t;i++)
    {
        s = 0;
        cin >> n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]>0)
                s=s+a[j];
        }
        c[i]=s;
    }
    for(i=0;i<t;i++)
        printf("Case %d: %d\n",i+1,c[i]);

}
