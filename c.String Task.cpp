#include <stdio.h>
int main()
{
	int i,j;
	char a[201],b[201];
	
	scanf("%s",a);
	for(i = 0,j =1;a[i]!=0;i++)
	{
		if(a[i] >= 'A'&&a[i]<='Z')
			a[i] = a[i]+32;	
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
			b[j-1]='.';
			printf("%c",b[j-1]);
			printf("%c",b[j]);
			j=j+2;		
		}
		return 0;
	}
