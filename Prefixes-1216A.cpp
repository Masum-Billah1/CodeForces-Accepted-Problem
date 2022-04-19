#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
    int n,b[2]={0},i,j=0,c=0,p;
    cin >> n;
    char a[n+1];
    getchar();
    gets(a);
    p=strlen(a);
    for(i=0;i<p;i=i+2)
    {
        if((a[i]=='a'&&a[i+1]=='a')||(a[i]=='b'&&a[i+1]=='b'))
        {
            a[i]='b';
            a[i+1]='a';
            j++;
        }
    }
    cout <<j<<endl;
    puts(a);
}
