#include<iostream>
using namespace std;
int main()
{
    int t,i,c=0,m;
    cin >> t;
    m=t;

    int a[t][2];

    for(i=0;i<t;i++){
        cin >> a[i][0];
        cin >> a[i][1];
    }
    for(i=0;i<t;i++)
        if(a[i][0]<0)
            c++;

    if(c==0||c==1||c==m||c==m-1)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

}
