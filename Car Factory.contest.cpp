#include<iostream>
using namespace std;
int main()
{
    long long int n,i;
    cin >> n;

    for(i=0;i<n;i++)
    {
        long long int n,t;
        cin >> n >> t;
        cout <<t+(n-1)<<endl;
    }

}
