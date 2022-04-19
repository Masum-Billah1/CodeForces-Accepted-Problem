#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int a,b,c,s,t;
        cin >> a >> b >> c;
        s=a+b+c;
        s=s/3;
        if(a>b)
            t=b;
        else
            t=a;
        if(s>t)
            cout << t<<endl;
        else
            cout << s<<endl;
    }
}
