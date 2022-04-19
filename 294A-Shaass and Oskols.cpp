#include<iostream>
using namespace std;
int main()
{
    int n,i,m,j,k;
    cin >> n;
    int a[n];
    for(i=1;i<=n;i++)
        cin >>a[i];
    cin >> m;

    int b[m][2];

    for(i=1;i<=m;i++)
        for(j=1;j<=2;j++)
            cin >> b[i][j];
    int c[m];
     for(i=1;i<=m;i++)
        for(j=1;j<=2;j++)
            c[i]=b[i][j];

   for(i=1;i<=m;i++)
            for(k=1;k<=n;k++)
    {
        if(b[i][1] == k)
        {
            a[k-1] = a[k-1]+c[i]-1;
            a[k+1] = a[k+1]+a[k]-c[i];
            a[k] = 0;
            a[0]=0;
            a[n+1]=0;
        }
    }
    for(i=1;i<=n;i++)
        cout << a[i] <<endl;

    return 0;
}
