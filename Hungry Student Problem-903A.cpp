#include<iostream>
using namespace std;
int main()
{
    int a,n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
    if(a==1||a==2||a==4||a==5||a==8||a==11)
        cout <<"NO"<<endl;
    else
        cout <<"YES"<<endl;
    }
}
