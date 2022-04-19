#include<iostream>
using namespace std;
int main()
{
    int x,n,i,c =0;
    cin >> x >>n;
    for(i = 0;i<5*n;i++)
    {
    if(x%n == 0)
    {
        c++;
        cout <<"Yes\n";
        break;
    }
    else
    {
        x = x+x%n;
    }

}
    if(c == 0)
        cout << "No\n";
}
