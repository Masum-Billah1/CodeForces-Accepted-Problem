#include<iostream>
using namespace std;
int main()
{
    int a,b,n,t;
    cin >> n >> a >> b;
    if(n-(a+b)>1)
    {
        t = n-(a+b)-1;
        t = (n-a)-t;
    }
    else
        t = n-a;
    cout << t <<endl;

    return 0;
}
