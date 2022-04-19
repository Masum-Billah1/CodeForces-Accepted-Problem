#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n,i;
    double t=10000000;
    cin >> a >> b>>n;

    for(i=0; i<n; i++)
    {
        int x,y,v;
        double d;
        cin >> x >> y>>v;
        d=sqrt((a-x)*(a-x)+(b-y)*(b-y));
        if((d/v)<t)
            t = d/v;
    }
    printf("%0.20lf",t);
}
