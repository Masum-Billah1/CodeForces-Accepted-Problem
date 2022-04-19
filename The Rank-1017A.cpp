#include<iostream>
using namespace std;
int main()
{
    int t=0,i,c=1,n,s;
    cin >> n;
    for(i=0;i<n;i++)
    {
        s=0;
        int a[4];
        cin >> a[0]>>a[1]>>a[2]>>a[3];
        s=a[0]+a[1]+a[2]+a[3];

        if(i==0)
            t=s;
        if(t<s)
            c++;
    }
    cout << c <<endl;
}
