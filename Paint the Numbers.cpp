#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,j;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1)
            c=1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1){
            i++;

            continue;
        }

        for(j=0;j<n;j++)
            if(j!=i)
                if(a[i]==a[j]||a[i]%a[j]==0||a[j]%a[i]==0)
                {
                    //cout <<a[i]<<endl;
                    a[i]=1;
                }
    }
    for(i=0;i<n;i++){
        if(a[i]>1)
            c++;
            cout <<a[i]<<" ";
    }

    cout << c<<endl;
}
