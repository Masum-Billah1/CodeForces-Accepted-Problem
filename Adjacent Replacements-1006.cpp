#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            cout <<a[i]-1<<" ";
        else
            cout <<a[i]<<" ";
    }
    cout <<endl;
}
