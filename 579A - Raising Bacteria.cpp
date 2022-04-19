#include<iostream>
using namespace std;
int main()
{
    int n,i,t=1;
    cin >> n;
    for(i=0; t<n; i++)
    {
        t=t*2;
    }
    cout << t<<endl;
    if(t==n)
        cout << 1<<endl;
    else
    {
        t=t/2;
    cout <<(n-t+1)<<endl;
    }
    return 0;
}
