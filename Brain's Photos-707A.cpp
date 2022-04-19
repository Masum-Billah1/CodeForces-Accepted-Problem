#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,i,c=0,j;
    cin >> n >> m;
    char a[202][202];
    getchar();
    for(i=0;i<n;i++)
        gets(a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*m-1);j=j+2)
        {
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
            {
                c=1;
                break;
            }
        }
    }
    if(c == 1)
        cout <<"#Color"<<endl;
    else
        cout <<"#Black&White"<<endl;
}
