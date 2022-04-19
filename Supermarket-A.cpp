#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,i;
    double c,min=100000.00;
    cin >> n >> m;

    for(i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        c=a/(double)b;
        if(c<min)
            min=c;
    }
    printf("%0.8lf\n",min*m);
}
