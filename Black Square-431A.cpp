#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int b[4],i,t,s=0;

    for(i=0;i<4;i++)
        cin >>b[i];
    getchar();
    char a[100001];
    gets(a);
    t = strlen(a);

    for(i=0;i<t;i++)
    {
        s=s+b[a[i]-'1'];
    }
    cout << s<<endl;
}
