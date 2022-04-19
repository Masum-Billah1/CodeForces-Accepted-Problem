#include<iostream>
using namespace std;
int main()
{
    int n,i,d,s,j,a,k=0,f;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> d >> s;
        int b[d];
        f=s;
        for(;a>0;a=a-2)
        {
            f=f-a;
            if(f/2 >= 9){
                b[k]=9;
                b[n-k]=9;
                k++;
                f=f-18;
            }
            else{
                b[k]=f/2;
                b[n-k]=f/2;
                f=f-f/2;
                k++;

            }

        }
        for(j=0;j<n;i++)
            cout <<b[i]<<" ";

    }
}
