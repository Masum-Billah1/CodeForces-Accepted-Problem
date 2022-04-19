#include<stdio.h>
int main()
{
    int n,p,i,c=0,j;
    scanf("%d",&n);
    getchar();
    char a[n][n+1];
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    scanf("%d",&p);
    getchar();
    char b[p][p+1];
    for(i=0;i<p;i++)
    {
        gets(b[i]);
    }
    for(i=0;i<p;i++)
    {
        c=0;
            for(j=0;j<n;j++)
            {
                if(strcmp(b[i],a[j])==0)
                    c++;
            }
            printf("%d\n",c);
    }
}
