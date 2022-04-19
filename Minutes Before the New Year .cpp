#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b;
        cin >> a >> b;
        a = (24-a)*60;
        b = 60-b;
        cout << a+b-60 <<endl;
    }
}
