#include<stdio.h>
int main()
{
	int i,c=10;
	char a[101];
	gets(a);
		for(i=0;a[i]!='\0';i++)
		{
		if(a[i]<='Z')
		{
			a[i]=a[i]+32;
		}	
		else if(a[i]>='a')
			a[i]=a[i]-32;
		puts(a);
		break;
	}
		
	for(i=1;a[i]!=0;i++)
	if(a[i]>='a'&&a[i]<='z')
	{
	puts(a);
	break;
	c=1;
	}
	printf("c = %d",c);
	if(c !=  10)
	return 0;
}
