
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    b = b/2;
    if(a>b)
        a = b;
    c = c/4;
    if(a>c)
        a = c;
    cout << 7*a<<endl;

}
