#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,c8=0,t;
    cin >> n;
    char a[n+1];
    getchar();
    gets(a);

    for(i=0;i<n;i++)
        if(a[i]=='8')
            c8++;

    t = n/11;

    if(c8>=t)
        cout << t<<endl;
    else
        cout << c8<<endl;


}
