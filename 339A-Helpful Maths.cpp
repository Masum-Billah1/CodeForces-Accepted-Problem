#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j;
    char a[101],t;

    gets(a);

    if(strlen(a) == 1)
        cout << a;
    else
    {
    for(i=0;i<strlen(a)-2;i= i+2)
        for(j=0;j<strlen(a)-2;j=j+2)
    {
        if(a[j]>a[j+2])
        {
            t=a[j];
            a[j]=a[j+2];
            a[j+2]=t;
        }
    }
    for(i=0;i<strlen(a);i++)
        cout << a[i];
    }
}
