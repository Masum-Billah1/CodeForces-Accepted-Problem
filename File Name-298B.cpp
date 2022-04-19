#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,c=0,t=0;
    cin >> n;
    getchar();
    char a[n+1];
    gets(a);

    for(i=0;i<n;i++)
    {
        if(a[i]!='x')
            c=0;
        if(a[i]=='x')
            c++;
        if(c > 2)
            t++;
    }
    cout << t <<endl;
}
