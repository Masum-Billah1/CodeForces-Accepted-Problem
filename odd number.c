#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    printf("odd number from %d to %d:\n",a,b);
    if(a%2!=1)
        a++;
    for(i=a;i<=b;i=i+2)
        printf("%d\n",i);

    return 0;
}
