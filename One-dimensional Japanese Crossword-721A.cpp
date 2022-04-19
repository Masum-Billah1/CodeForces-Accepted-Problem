#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,c=0,i,j,m=1,t;
    cin >> n;
    getchar();
    char a[n+1];
    gets(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='B')
            c++;
        t=i;
        for(j=i;j<n;j++)
        {
            i=j;
            if(a[j]!='B')
                break;

        }

    }
    cout<< c<<endl;

    for(i=0;i<n;i++)
    {
        if(a[i]=='B')
            c++;
        t=i;
        for(j=i;j<n;j++)
        {
            i=j;
            if(a[j]!='B')
                break;

        }
        if(j-t!=0)
            cout<< j-t<<" ";
    }
}
