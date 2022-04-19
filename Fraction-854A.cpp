#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin >> n;
    if(n%2==0)
        t=(n-1)/2;
    else
        t=n/2;

    if(t%2==0 && (n-t)%2==0)
       cout << t-1 <<" "<<n-t+1<<endl;
    else
    cout << t <<" "<<n-t<<endl;
}
