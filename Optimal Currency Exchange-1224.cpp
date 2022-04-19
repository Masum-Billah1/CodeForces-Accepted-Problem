#include<iostream>
using namespace std;
int main()
{
    int n,e,d,t,t1,t2;
    cin >> n >>d >>e;
    t=e*200;
    n=n%t;
    if(d<e)
    {
        t=e*100;
        n=n%t;
        t=d*100;
        n=n%t;

    }
    else
    {
        t=d*100;
        n=n%t;
        t=e*100;
        n=n%t;
    }
    if(d<e)
    {
        t=e*50;
        n=n%t;
        t=d*50;
        n=n%t;
    }
    else
    {
        t=d*50;
        n=n%t;
        t=e*50;
        n=n%t;
    }
    if(d<e)
    {
        t=e*20;
        n=n%t;
        t=d*20;
        n=n%t;
    }
    else
    {
        t=d*20;
        n=n%t;
        t=e*20;
        n=n%t;
    }
    if(d<e)
    {
        t=e*10;
        n=n%t;
        t=d*10;
        n=n%t;
    }
    else
    {
        t=d*10;
        n=n%t;
        t=e*10;
        n=n%t;
    }
    if(d<e)
    {
        t=e*5;
        n=n%t;
        t=d*5;
        n=n%t;
    }
    else
    {
        t=d*5;
        n=n%t;
        t=e*5;
        n=n%t;
    }

    t=d*2;
    n=n%t;
    t=d*1;
    n=n%t;

    cout << n <<endl;

}
