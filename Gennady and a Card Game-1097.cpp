#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,c = 0,j;
    char a[3],b[15];
    gets(a);
    gets(b);

    for(i=0,j=1;i<15,j<15;i=i+3,j=j+3)
    {
        if(a[0]==b[i] || a[1]==b[j])
        {
            c=1;
            cout <<"YES"<<endl;
            break;
        }
    }
    if(c == 0)
        cout <<"NO"<<endl;

}
