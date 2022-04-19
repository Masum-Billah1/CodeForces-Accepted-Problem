#include<stdio.h>
int main()
{
    int i,n,j=0,t;
    char ch[2001],dc[2001];
    scanf("%d",&n);
    getchar();
    gets(ch);
    if(n&1 == 1)
    {
    t=n;
    for(i=0;i<t/2;i++)
    {
        dc[i]=ch[n-2];
        n=n-2;
    }
    for(;i<t;i++,j=j+2)
    {
    dc[i]=ch[j];
    }

    for(j=0;j<t;j++)
        printf("%c",dc[j]);
    }
    else
    {
        for(i=0;i<)
    }
}
