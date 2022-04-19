#include<iostream>
using namespace std;
int main()
{
    int t,i,p=0,ip;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        a /=2;
        if(e>=d)
        {
            if(a>c){
                ip=c;
                a=a-ip;
            }
            else{
                ip=a;
                a=0;
            }
            p=p+ip*e;
            if(a>b)
                ip=b;
            else
                ip=a;
            p=p+ip*d;
        }
        else
        {
            if(a>b){
                ip=b;
                c=a-ip;
            }
            else{
                ip=a;
                c=0;
            }
            p=p+ip*d;

            if(a<c)
                ip=a;
            else
                ip=c;
            p=p+ip*e;
        }
        cout << p<<endl;
        p=0;
    }
}
