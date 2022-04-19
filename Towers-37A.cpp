#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,max = 0;
    cin >> n;
    int a[n],b[1001]= {0};

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for(i=0; i<=1000; i++)
    {
        if(b[i]!=0)
            c++;
        if(b[i]>max)
            max=b[i];
    }
    cout << max <<" "<< c <<endl;
}
