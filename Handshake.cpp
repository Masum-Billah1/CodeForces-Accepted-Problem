#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        cout <<a*(a-1)/2<<endl;
    }
}
