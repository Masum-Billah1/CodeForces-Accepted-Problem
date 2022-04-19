#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,t,i,j,k,m,c;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int a;
        cin >> a;
        int e[10000];
        getchar();
        for(j=0;j<a;j++)
        {
            int d;
            char b[51];
            cin >> b;
            cin >> d;
            getchar();

            e[j]=d;
        }
        t=0;
        for(j=0;j<a;j++)
       {
           c=0;
            for(k=0;k<a;k++)
            {
                if(e[j]==e[k])
                    c++;
            }
            if(c>t)
            {
               t=c;
               m=e[j];
            }

        }
       cout << m <<endl;

    }

}
