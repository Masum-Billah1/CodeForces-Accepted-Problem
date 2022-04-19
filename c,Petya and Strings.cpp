#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[101],b[101];
	gets(a);
	gets(b);
	for(i=0;a[i]!=0,b[i]!=0;i++)
	{
		if(a[i]>96)
			a[i]=a[i]-32;
		if(b[i]>96)
			b[i]=b[i]-32;
	}
	if(strcmp(a,b) == 0)
		printf("0\n");
	else
	{
		for(i=0;a[i]!=0;i++)
			if(a[i]>b[i])
			{
				printf("1\n");
				break;
			}
			else if(b[i]>a[i])
			{
				printf("-1\n");
				break;
			}
			else
				continue;
	}
	return 0;
}
