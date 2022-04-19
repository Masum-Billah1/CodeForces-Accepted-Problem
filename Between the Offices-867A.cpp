#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,f=0,s=0,i;
    cin >> n;
    getchar();
    char a[n+1];
    gets(a);

    for(i=1;i<n;i++)
    {
        if(a[i-1]=='S'&&a[i]=='F')
            f++;
        else if(a[i-1]=='F'&&a[i]=='S')
            s++;
    }
    if(f>s)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

}
