#include<stdio.h>
int main()
{
    int i,n,t=0,j;
    char a[150][4];
    scanf("%d",&n);

    getchar();

    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }

   for(i=0;i<n;i++)
    {
        if(a[i][1]=='+')
            t++;
        else
            t--;
    }
    printf("%d\n",t);
}
