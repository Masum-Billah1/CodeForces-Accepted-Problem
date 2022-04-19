#include<iostream>
using namespace std;
int main()
{
    int m,n,a,t1,t2;
    long long int t;

    cin>>m>>n>>a;

    if(m%a !=0)
        t1 = m/a+1;
    else
        t1 = m/a;
    if(n%a != 0)
        t2 = n/a+1;
    else
        t2 = n/a;
    t = (long long int)t1*(long long int)t2;
    cout << t<<endl;
}
