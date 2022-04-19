#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s =s+a[i];
    }
    cout << s <<endl;
}

