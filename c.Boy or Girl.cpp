#include <stdio.h>
int main()
{
	char a[101],b[26]={0},i,j,c=0;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[a[i]-97] = 1;
	}
	for(j = 0;j<26;j++)
	{
		if(b[j] == 1)
			c++;
	}
		
	if(c%2 == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
		
	return 0;
}
