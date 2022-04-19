#include<iostream>
using namespace std;
int main()
{
    int n,t=5,m=5,o,i;
    cin >> n;
    if(n==1)
    {
        cout<<"Sheldon"<<endl;
        return 0;
    }
    if(n == 2)
    {
        cout <<"Leonard"<<endl;
        return 0;
    }
    if(n == 3)
    {
        cout <<"Penny"<<endl;
        return 0;
    }
    if(n == 4)
    {
        cout <<"Rajesh"<<endl;
        return 0;
    }
    if(n == 5)
    {
        cout <<"Howard"<<endl;
        return 0;
    }


    for(i=1;;i++)
    {
        t = t*2;
        o = t+5*i;
        if(o>=n)
            break;
        m = o;
    }
    if(n>5)
        n=n-m;
    if(n>15)
        t = t-m;
    t=t/5;
    m=0;
    for(i=0;i<5;i++)
    {
        m=m+t;
        if(n<=m)
        {
            if(i==0)
            {
                cout<<"Sheldon"<<endl;
                break;
            }
            if(i==1)
            {
                cout <<"Leonard"<<endl;
                break;
            }

            if(i==2)
            {
                cout <<"Penny"<<endl;
                break;
            }
            if(i==3)
            {
                cout <<"Rajesh"<<endl;
                break;
            }

            if(i==4)
            {
                cout <<"Howard"<<endl;
                break;
            }

        }

    }
}

