#include<iostream>
using namespace std;
int main()
{
    int n,i,t=0,c=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i] == -1 && t>0)
            t--;
        else if(a[i] > 0)
            t = t+a[i];
        else
            c++;

    }
    cout << c <<endl;
}
