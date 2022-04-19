#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for(i = 0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]!=1)
            a[i]=a[i]-1;
    }

    for(i = 0;i<n;i++)
        cout << a[i]<<" ";

}
