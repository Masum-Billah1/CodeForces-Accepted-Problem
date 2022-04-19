#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,c,k=0,j,t;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]!=101)
            t = a[i];
        else
            continue;
        for(j=0;j<n;j++)
        {
            if(a[j]%t==0)
            {
                a[j]=101;
                c=1;
            }
        }
        if(c == 1)
            k++;

    }
    cout << k <<endl;
}
