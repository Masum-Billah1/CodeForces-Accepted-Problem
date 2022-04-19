#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    cin >> a >> b >> c;
    if(a>=b && a>=c)
        t=a-(b+c)+1;
    else if(b>=c && b>=a)
        t=b-(a+c)+1;
    else if(c>=a && c>=b)
        t=c-(a+b)+1;
    if(t<0)
        cout << 0 << endl;
    else
        cout << t << endl;

    return 0;
}
