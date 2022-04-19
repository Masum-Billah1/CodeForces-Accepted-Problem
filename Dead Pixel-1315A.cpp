#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,c,d,s[4];
        cin >>a >> b >> c >>d;
        s[0]=b*c;
        s[1]=b*(a-c-1);
        s[2]=d*a;
        s[3]=a*(b-d-1);
        sort(s,s+4);
        cout << s[3]<<endl;
    }
}
