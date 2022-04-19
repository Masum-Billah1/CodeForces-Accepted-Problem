#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,j,c=0,max=0,min=9999,l1,l2,t;
    cin >> n;
    for(i=0;i<n;i++)
        cin >>a[i];

        for(j=0;j<n;j++)
        {
            if(a[j]>max){
                max = a[j];
                l1 = j;
                }
        }
        for(i=l1;i>0;i--)
        {
            if(a[i-1]<max)
            {
                t = a[i];
                a[i]=a[i-1];
                a[i-1]=t;
                c++;
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j]<=min){
                min = a[j];
                l2 = j;
        }
        }
        for(i=l2;i<n-1;i++)
        {
            if(a[i+1]>min)
            {
                t = a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                c++;
            }
        }
        cout << c<<endl;

}
