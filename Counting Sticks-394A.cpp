#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j=0,t,c[3]={0},d=0;
    char a[303],m;
    gets(a);
    t = strlen(a);
    for(i=0;i<t;i++)
    {
        if(a[i]=='|')
            c[j]++;
        else
            j++;
    }
    if(c[0]+c[1]==c[2])
    {
        puts(a);
        return 0;
    }
    else if(c[0]+c[1]+2==c[2])
    {
        c[0]=c[0]+1;
        c[2]=c[2]-1;
        d=1;
    }
    else if(c[0]+c[1]==c[2]+2)
    {
        if(c[0]>1)
        {
            c[0]=c[0]-1;
            c[2]=c[2]+1;
            d=1;
        }
        else
        {
            c[1]=c[1]-1;
            c[2]=c[2]+1;
            d=1;
        }
        d=1;
    }
     //cout <<c[0] <<c[1]<<c[2];
    if(d == 1)
    {
        for(i=0;i<c[0];i++)
            cout <<'|';
        cout <<'+';
        for(i=0;i<c[1];i++)
            cout <<'|';
        cout <<'=';
        for(i=0;i<c[2];i++)
            cout <<'|';
        cout <<endl;
    }
    else
        cout <<"Impossible"<<endl;
}
