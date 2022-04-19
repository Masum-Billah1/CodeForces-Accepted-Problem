#include<iostream>
using namespace std;
int main()
{
    int n,k,i,c = 0,t;
    cin >> n >> k;
    int a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    t=a[k-1];
        for(i=0; i<n; i++)
        {
            if(a[i]>=t && a[i]!=0)
            if (a[i]>=t)
                c++;
        }
    cout << c <<endl;

}
