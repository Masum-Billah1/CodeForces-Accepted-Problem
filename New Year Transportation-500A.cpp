#include<iostream>
using namespace std;
int main()
{
    int n,m,i,c=0;
    cin >> n >>m;

    int a[n-1];
    for(i=0;i<n-1;i++)
        cin >> a[i];

    for(i=1;i<n;)
    {
        i=i+a[i-1];
        if(i==m)
        {
            c=1;
            cout <<"YES"<<endl;
            break;
        }
    }
    if(c==0)
        cout <<"NO"<<endl;
}
