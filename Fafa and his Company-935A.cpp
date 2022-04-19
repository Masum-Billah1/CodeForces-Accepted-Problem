#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cin >> n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            c++;
    }
    cout << c;
}
