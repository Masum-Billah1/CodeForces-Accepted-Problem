#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,v1,v2,n1,n2,t1=0,t2=0;
    cin >> n>>v1>>v2>>n1>>n2;

    t1=n*v1+2*n1;
    t2=n*v2+2*n2;

    cout <<t1<<" "<<t2<<endl;

    if(t1<t2)
        cout <<"First"<<endl;

    else if(t1>t2)
        cout <<"Second"<<endl;

    else
    cout<<"Friendship"<<endl;
}
