#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,b,c;
    cin >> n;
    char a[101];
    for(i=0;i<n;i++)
    {
        int c = 0;
        cin >>b;
        getchar();
        gets(a);
        for(j=0;j<b;j++)
        {
            if(a[j]=='8'){
                    c=1;
                if(b-j>=11)
                    cout <<"YES"<<endl;
                else
                    cout <<"NO"<<endl;
                break;
            }
        }
        if(c==0)
            cout <<"NO"<<endl;
    }
}
