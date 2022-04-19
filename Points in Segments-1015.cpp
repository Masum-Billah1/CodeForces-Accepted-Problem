#include<iostream>
using namespace std;
int main()
{
    int n,m,i,c=0,j,k=0;
    cin >> n >>m;
    int a[n][2],b[m];

    for(i=0;i<n;i++)
        cin >>a[i][0]>>a[i][1];

    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i >= a[j][0] && i <= a[j][1])
                break;
        }
        if(j==n){
            b[k]=i;
            k++;
        }
    }
    cout << k<<endl;
    for(i=0;i<k;i++)
        cout << b[i]<<" ";

}
