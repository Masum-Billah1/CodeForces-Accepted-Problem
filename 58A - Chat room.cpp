#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,c=0,n,t,b[5]={0};
    char a[101];
    gets(a);
    n = strlen(a);

    for(i = 0;i<n;i++)
    {
        if(a[i]=='h')
        {
            b[0]=1;
            break;
        }

    }

    for(i=i+1;i<n;i++)
    {
        if(a[i]=='e')
        {
            b[1]=1;
            break;
        }
    }

    for(i=i+1;i<n;i++)
    {
        if(a[i]=='l')
        {
            b[2]=1;
            break;
        }
    }

    for(i=i+1;i<n;i++)
    {
        if(a[i]=='l')
        {
            b[3]=1;
            break;
        }
    }

    for(i=i+1;i<n;i++)
    {
        if(a[i]=='o')
        {
            b[4]=1;
            break;
        }
    }

    for(i=0;i<5;i++)
        if(b[i]==1)
            c++;
    if(c == 5)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}

