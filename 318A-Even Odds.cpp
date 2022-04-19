#include<iostream>
using namespace std;
int main()
{
    long long int n,k,t,num;
    cin >> n >> k;


    if(n%2 == 0)
        t = n/2;
    else
        t = n/2+1;

        if(k<=t)
            num = (k*2)-1;
        else
            num = (k-t)*2;

        cout << num;


    return 0;
}
