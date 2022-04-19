#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cin >> m >> n;
    int a[m],b[n];

    for(i=0;i<m;i++)
        cin >>a[i];
    for(i=0;i<n;i++)
        cin >> b[i];

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                cout << b[j]<<" ";
        }

}
