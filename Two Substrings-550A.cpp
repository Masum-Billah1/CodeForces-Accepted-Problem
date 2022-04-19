#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,c1=0,c2=0;
    char a[100001];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='A'&&a[i+1]=='B'&&a[i+2]=='A'||a[i]=='B'&&a[i+1]=='A'&&a[i+2]=='B')
        {
            a[i]='C';
            a[i+1]='C';
            a[i+2]='C';
            c1 = 1;
            break;
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='A'&&a[i+1]=='B'||a[i]=='B'&&a[i+1]=='A')
            c2 = 1;
    }
    if(c1+c2 == 2){
        cout <<"YES"<<endl;
        return 0;
    }
    c1=0;
    c2=0;

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='A'&&a[i+1]=='B')
        {
            c1=1;
            i=i+2;
            break;
        }
        if(a[i]=='B'&&a[i+1]=='A')
        {
            c2=1;
            i=i+2;
            break;
        }

    }
    if(c1 == 1)
        for(;i<strlen(a);i++){
        if(a[i]=='B'&&a[i+1]=='A')
            {
                c2 = 1;
                i++;
            }
        }
    if(c2 == 1)
        for(;i<strlen(a);i++){
        if(a[i]=='A'&&a[i+1]=='B')
            {
                c1 = 1;
                i++;
            }
        }

    if(c1+c2 == 2)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
}
