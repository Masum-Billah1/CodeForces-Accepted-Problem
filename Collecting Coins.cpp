#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c,d,l,s = 0;
        cin >> a >> b >> c >> d;
        if(a > b && a > c)
            l = a;

        else if(b > c && b > a)
            l = b;

        else
            l = c;

        s = s+(l-a);
        s = s+(l-b);
        s = s+(l-c);

        if(s <= d && (a+b+c+d)%3 == 0)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }


}
