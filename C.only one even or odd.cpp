#include <stdio.h>
int main()
{
	int n,i,c1=0,c2=0;
	scanf("%d",&n);
	char a[n];
	
	for(i = 0;i < n;i++)
	{
		scanf(" %c",&a[i]);
		if(a[i] == 'A')
			c1++;
		else if(a[i] == 'D')
			c2++;
	}
	if(c1>c2)
		printf("Anton");
	else if(c2>c1)
		printf("Danik");
	else
		printf("Friendship");
		
}
