#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin >> n;
    getchar();
    char a[n+1],t;
    gets(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            c++;

    }
    cout << c<<endl;

}
