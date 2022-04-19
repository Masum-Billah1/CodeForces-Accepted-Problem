#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i=1,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >>a[i];
   // sort(a,a+n);
    i=1;
    for(j=0;j<n;j++)
    {
        if(a[j]>=i)
            i++;
    }
    cout <<i-1 <<endl;

}
