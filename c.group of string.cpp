#include<stdio.h>
#include <string.h>
int main()
{
int n,i,c=1;

scanf("%d",&n); 
char str[n][3];

for(i=0;i<n;i++)
{
   scanf("%s",str[i]);
}
for(i=1;i<n;i++)
{
   if(strcmp(str[i],str[i-1])!=0)
   		c++;
}
printf("%d",c);
return 0;
}
