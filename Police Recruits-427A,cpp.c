#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==-1)
            t++;
    }
    cout <<t<<endl;

}
