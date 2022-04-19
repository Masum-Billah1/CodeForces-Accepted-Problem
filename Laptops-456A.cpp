#include<iostream>
using namespace std;
int main()
{
    int c =0,i,t;
    cin >> t;
    int a[t][2];
    for(i=0;i<t;i++){
        cin >> a[i][0]>>a[i][1];
        if(a[i][0]>a[i][1])
            c=1;
    }
    if(c==0)
        cout <<"Poor Alex"<<endl;
    else
        cout <<"Happy Alex"<<endl;
}
