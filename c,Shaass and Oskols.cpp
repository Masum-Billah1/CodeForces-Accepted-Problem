#include<iostream>
using namespace std;
int mainn()
{
    int n,i,m,j;
    cin >> n >>m;
    int a[n];
    for(i=1;i<n;i++)
        cin >>a[i];
    int b[m][2];

    for(i=1;i<=n;i++)
        for(j=1;j<=2;j++)
            cin >> b[i][j];

    cout << n<<endl;

    for(i = 1;i<=n;i++)
        cout << a[i] <<" ";
    cout << endl;

    cout << m <<endl;

    for(i=1;i<=n;i++)
        for(j=1;j<=2;j++)
            cout << b[i][j] <<" ";


}

