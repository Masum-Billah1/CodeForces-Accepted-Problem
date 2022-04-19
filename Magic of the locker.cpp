#include<iostream>
using namespace std;
int main()
{
    long long int a,i,t=0,s=1,j;
    cin >> a;
    long long int b;
    for(i=0;i<a;i++)
    {
        s=1;
        cin >> b;
        if(b==1)
            cout << 1 <<endl;
         else if(b%3==0)
        {
            t=b/3;
            for(j=0;j<t;j++)
               s=s*3;
            cout << s <<endl;
        }
        else if(b%3==1)
        {
            s=s*4;
            b=b-4;
            for(j=0;j<b/3;j++)
                s=s*3;
            cout << s <<endl;
        }
        else
        {
            b=b-2;
            s=s*2;
            for(j=0;j<b/3;j++)
                s=s*3;
            cout << s <<endl;
        }
    }

}
