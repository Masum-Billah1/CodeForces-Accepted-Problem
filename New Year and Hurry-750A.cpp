#include<iostream>
using namespace std;
int main()
{
    int n,k,t,c = 0,s = 0,i;
    cin >> n >>k;
    t = 240-k;
    for(i=1;i<=n;i++)
    {
        s=s+i*5;
        if(s<=t)
            c++;
        else
            break;
    }
    cout << c;
}
