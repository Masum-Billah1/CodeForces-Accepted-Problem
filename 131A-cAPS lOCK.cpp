#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,c=0,t;
    char a[101];
    gets(a);
    t = strlen(a);

    for(i=0;i<t;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            c++;
    }
    if(c == t||(c==t-1&&a[0]>='a'&&a[0]<='z'))
        for(i = 0;i<t;i++)
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-32;
        else
            a[i]=a[i]+32;

    puts(a);
}
