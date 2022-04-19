#include<iostream>
using namespace std;
using namespace std;
int main()
{
    int n,k,m,t;
    cin >> n >> k;
    if(n<k)
    {
        cout << k <<endl;
    }
    else
    {
        m=n-k;
        t = m/k+2;
        cout << t*k<<endl;
    }

}
