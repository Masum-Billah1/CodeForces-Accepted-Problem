#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >>a;
        if(a%7==0)
            cout <<a/7<<endl;
        else
            cout <<(a/7)+1<<endl;
    }
}
