#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i,j,k,t;
    char a[101];
    gets(a);
    t = strlen(a);
    for(i =0; i<t; i++)
    {
        if(a[i]=='Q')
            for(j=i; j<t; j++)
                if(a[j]=='A')
                    for(k=j; k<t; k++)
                        if(a[k]=='Q')
                            c++;
    }
    printf("%d",c);
}
