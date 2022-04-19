#include<iostream>
using namespace std;
int main()
{
    int i,t,c=0;
    long long int n;
    cin >>n;
    for(i=0;n>0;i++)
    {
        t = n%10;
        if(t == 7||t == 4)
            c++;
        n=n/10;
        //cout << c <<endl;
    }
    if(c==4||c==7)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}
