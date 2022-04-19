#include<stdio.h>
#include<math.h>
int seive(int a,int n)
{
    int t,i,j;
    t = sqrt(n);
    for(i=2;i<t;i++)
      for(j=i*2;j<=n;j=j+i)
    {
        a[j]=0;
    }
    for(i=1;i<n;i++)
    {
        if(a[i]!=0)
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(i = 2;i<=n;i++)
        a[i]=i;
    seive(a,n);
}
