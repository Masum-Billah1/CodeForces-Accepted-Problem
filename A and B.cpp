#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int a,b,t,i;
    cin >> test;
    while(test--)
    {
        int c =0,s=0;
        cin >> a >> b;
        t = abs(a-b);
        for(i=1;s<t;i++)
        {
            s = s+i;
            c++;
        }
        cout << c+(s-t)<<endl;
    }
}
