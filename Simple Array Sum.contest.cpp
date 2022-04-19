#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s=s+a[i];
    }
    cout << s<<endl;
}
