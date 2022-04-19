#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,c=0,t;
    char a[51];
    gets(a);

    t = strlen(a);
    for(i=0;i<t;i++)
        if(a[i]=='a')
            c++;

    if(c>t/2)
        cout << t <<endl;
    else
        cout << c+c-1<<endl;

}
