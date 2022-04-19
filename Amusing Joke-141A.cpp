#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int a[26]={0},b[26]={0},i,m=0;
    char d[101],e[101],c[101];
    gets(d);
    gets(e);
    gets(c);

    for(i=0;i<strlen(d);i++)
        b[d[i]-'A']++;

    for(i=0;i<strlen(e);i++)
        b[e[i]-'A']++;

    for(i=0;i<strlen(c);i++)
        a[c[i]-'A']++;

    for(i=0;i<26;i++)
        if(a[i]!=b[i]){
            cout <<"NO"<<endl;
            m = 1;
            break;
        }
    if(m == 0)
        cout <<"YES"<<endl;

}
