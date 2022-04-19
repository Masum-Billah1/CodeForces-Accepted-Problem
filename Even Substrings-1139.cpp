#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,t,s=0;
    cin >> n;
    getchar();
    char a[n+1];
    gets(a);

    for(i=0;i<n;i++)
    {
        t=a[i]-'0';
        if(t%2 == 0)
            s=s+i+1;
    }
    cout << s;

}
