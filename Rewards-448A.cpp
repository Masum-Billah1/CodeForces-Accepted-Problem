#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,s1,s2,t1,t2;
    cin >> a1 >>a2 >>a3;
    s1 = a1+a2+a3;

    int b1,b2,b3;
    cin >> b1>>b2>>b3,s2;
    s2 = b1+b2+b3;

    int n;
    cin >> n;

    if(s1%5 == 0)
        t1 = s1/5;
    else
        t1 = s1/5+1;

    if(s2%10 == 0)
        t2 = s2/10;
    else
        t2 = s2/10+1;
   // cout <<t1 <<" "<<t2<<endl;
    if(t1+t2<=n)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;


}
