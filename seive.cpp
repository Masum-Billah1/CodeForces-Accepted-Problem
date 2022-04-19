#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin >> n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }
    for(i=2;i<sqrt(n);i++)
    {
        k=i;
        for(j=i;j<=n;j++)
            if(i*k==a[j])
    {
        a[j]=0;
        k++;
    }
    k=0;
    }
    for(i = 2;i <= n;i++)
        if(a[i]!=0)
            cout <<a[i]<<" ";
}
