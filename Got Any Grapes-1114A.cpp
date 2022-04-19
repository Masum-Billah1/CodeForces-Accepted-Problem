#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    int g,p,b;
    cin >> g >> p >> b;
    if(g<A)
    {
        cout <<"NO"<<endl;
        return 0;
    }
    else
        p=p+g-A;
    if(B>p)
    {
        cout <<"NO"<<endl;
        return 0;
    }
    else
        b=b+p-B;
    if(C>b)
    {
        cout <<"NO"<<endl;
        return 0;
    }
    else
        cout <<"YES"<<endl;
}
