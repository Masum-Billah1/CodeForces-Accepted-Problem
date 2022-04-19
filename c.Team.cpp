#include <stdio.h>
int main()
{
	int n,i,j,c=0,t=0;
	scanf("%d",&n);
	int a[n][3];
	
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j] == 1)
				c++;
		}
		if(c>=2)
			t++;
		c=0;
	}
	printf("%d\n",t);
	
	return 0;
}
