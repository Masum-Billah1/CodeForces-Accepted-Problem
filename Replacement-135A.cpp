#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n,i,j,c=0,t;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
            c++;
    }
        sort(a,a+n);

    for(i=n-2;i>=0;i--)
        a[i+1]=a[i];
    a[0]=1;
    //cout <<"c="<<c<<"\t"<<"n="<<n;
    if(c==n)
        a[n-1]=2;

    for(i=0;i<n;i++)
        cout << a[i]<<" ";
    cout <<endl;
}
