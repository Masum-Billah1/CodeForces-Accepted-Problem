#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
    int i,s=0,t,n;
    char a[101];
    gets(a);
    n=strlen(a);

    t = abs(a[0]-'a');
    if(t>13)
        t=26-t;
    s=s+t;

    for(i=1;i<n;i++)
    {
        t = abs(a[i-1]-a[i]);
        if(t>13)
            t=26-t;
        s=s+t;
    }
    cout << s<<endl;


}
