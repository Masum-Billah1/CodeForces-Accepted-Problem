#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,t;
    char a[101];
    gets(a);

    t = strlen(a);

    for(i=0;i<t;i++)
    {
        if(a[i]<'Z')
            a[i]=a[i]+32;
    }
    t=t-1;
    for(i=0;;i++)
    {
        if(a[t]>='a'&&a[t]<='z')
            break;
        else
            t--;
    }


    if(a[t]=='a'||a[t]=='e'||a[t]=='i'||a[t]=='o'||a[t]=='u'||a[t]=='y')
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

}
