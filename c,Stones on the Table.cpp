#include <stdio.h>
int main()
{
	int n,i,c=0;
	char a[51];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf(" %c",&a[i]);
	a[i]='\0';
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
			c++;
	}
	printf("%d\n",c);
}
