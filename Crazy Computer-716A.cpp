#include<iostream>
using namespace std;
int main()
{
    int m,n,i,c=1;
    cin >> m >> n;
    int a[m];

    for(i=0;i<m;i++)
        cin >>a[i];

    for(i=1;i<m;i++)
    {
        if((a[i]-a[i-1])<=n)
            c++;
        else
            c=1;

    }
    cout << c<<endl;
}
