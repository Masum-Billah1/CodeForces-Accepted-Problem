#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    cin >> n;

    int b[n][2];
    for(i=0;i<n;i++)
        cin >> b[i][0]>>b[i][1];
    cin >> k;

    for(i=0;i<n;i++)
    {
        if(b[i][0]<=k && b[i][1]>=k)
        {
            cout << n-i<<endl;
            break;
        }
    }
}
