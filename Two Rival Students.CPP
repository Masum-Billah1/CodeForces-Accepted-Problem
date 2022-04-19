#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d;
        e = a-1;
        f = abs(c-d)+b;
        if(e>f)
            e = f;
        cout << e <<endl;
    }
}
