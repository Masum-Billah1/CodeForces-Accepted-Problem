#include<iostream>
using namespace std;
int t=0;
int stepp(int n,int m)
{
    if(t!=0)
        n=t+n;
    if(n%m!=5)
    {
        t=n;
        return n+stepp(1,m);
    }
    else
        return 1;


}
int main()
{
    int n,m,step;
    cin >> n >> m;
    if(n%2==0)
        step = n/2;
    else
        step = n/2+1;
    cout <<stepp(step,m);
}
