#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int n,x;
        cin >> n >> x;
        if(n/2 >= x)
            cout << x*2<<endl;
        else
            cout << x*2-1<<endl;
    }
}
