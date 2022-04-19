#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,k,r,g,b;
    cin >> n >> k;
    if(n*2 % k == 0)
        g = n*2/k;
    else
        g = n*2/k+1;

   if(n*5 % k == 0)
        r = n*5/k;
    else
        r = n*5/k+1;

     if(n*8 % k == 0)
        b = n*8/k;
    else
        b = n*8/k+1;

    printf("%I64\n",g+r+b);

}
