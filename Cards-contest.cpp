#include<iostream>
#include<stdio.h>
using namespace std;
char a[100001];
int main()
{
   int n,b[5]={0},c[3],i,t;
   cin >> n;
   getchar();
   gets(a);
   for(i=0;i<n;i++)
   {
       if(a[i]=='o')
            b[a[i]-'o']++;
       else if(a[i]=='e')
            b[a[i]-'d']++;
        else if(a[i]=='n')
            b[a[i]-'l']++;
        else if(a[i]=='z')
            b[a[i]-'w']++;
        else if(a[i]=='r')
            b[a[i]-'n']++;
   }


   for(i=0;i<3;i++)
    {
        c[i]=b[i];
    }
    if(c[0]>c[1])
    {
        t=c[0];c[0]=c[1];c[1]=t;
    }
    if(c[0]>c[2])
    {
        t=c[0];c[0]=c[2];c[2]=t;
    }
    if(c[1]>c[2])
    {
        t=c[1];c[1]=c[2];c[2]=t;
    }


    for(i=0;i<3;i++)
    {
        b[i]=b[i]-c[0];
    }

    t = b[2];
    b[2]=b[4];
    b[4] = t;

    t = b[0];
    for(i=1;i<4;i++)
        if(t>b[i])
        {
            t=b[i];
        }

    for(i=0;i<c[0];i++)
        cout << 1 <<" ";
    for(i=0;i<t;i++)
        cout << 0 <<" ";
    cout <<endl;

}
