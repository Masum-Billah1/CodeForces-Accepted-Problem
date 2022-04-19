#include<stdio.h>
int main()
{
    int t=0;
    while(1)
    {
        int a;
        scanf("%d",&a);
        if(a == 0)
            return 0;
        if(t!=0 && a>t)
            printf("Greater than The Previous\n");
        else if(t!=0 && a<t)
            printf("smaller than The Previous\n");
        else if(t == a)
            printf("Equal to the previous\n");
        t=a;

    }
}
