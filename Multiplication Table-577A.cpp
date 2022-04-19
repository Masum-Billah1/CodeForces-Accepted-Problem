#include<iostream>
using namespace std;
int main()
{
    long long int t,n,x,i,c=0;
    cin >> n >> x;
    for(i=1;i<=n;i++)
    {
        if(n*i>=x && x%i==0)
            c++;
    }
    cout << c <<endl;
}
