#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,j=0,i;
    cin >> n;
    getchar();
    char a[n+1];
    cin >>a;
    for(i=0;i<n;i=i+j)
    {
        cout << a[i];
        j++;
    }
    cout <<endl;
}
