#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(i>0)
            cout << a[i]+a[i-1]<<" ";
        if(i==n-1)
            cout <<a[i]<<endl;
    }
}
