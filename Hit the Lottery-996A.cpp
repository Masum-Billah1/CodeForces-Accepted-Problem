#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin >> n;

    s = s+n/100;
    n = n%100;

    s = s+n/20;
    n = n%20;

    s = s+n/10;
    n = n%10;

    s = s+n/5;
    n = n%5;
    s = s+n;

    cout << s<<endl;

}
