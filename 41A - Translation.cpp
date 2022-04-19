#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,t,c=0;
    char a[101],b[101];
    gets(a);
    gets(b);

    t=strlen(a);

    for(i=0;i<strlen(a);i++)
    {
        t--;
        if(a[i]==b[t])
            c++;
    }

    if(c==strlen(a))
        cout <<"YES\n";
    else
        cout <<"NO\n";

    return 0;
}

