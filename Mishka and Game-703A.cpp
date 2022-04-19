#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,m=0,c=0;
    cin >>n;
    int a[n][2];

    for(i=0;i<n;i++){
        cin >> a[i][0]>>a[i][1];

    if(a[i][0]>a[i][1])
        m++;
    else if(a[i][0]<a[i][1])
        c++;
    }
    if(m>c)
        cout <<"Mishka"<<endl;
    else if(m<c)
        cout <<"Chris"<<endl;
    else
        printf("Friendship is magic!^^\n");

}
