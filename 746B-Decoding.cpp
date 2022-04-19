#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,t;
    char ch[2001],dc[2001];
    scanf("%d",&n);
    cin >> ch;
    t = n;
    for(i=0;n>=1;i++)
    {
        dc[i]=ch[n-2];
        dc[n-1]=ch[n-1];
        n=n-2;
    }
    dc[t]='\0';
    puts(dc);
}
