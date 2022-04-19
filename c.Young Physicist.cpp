#include<stdio.h>
int main()
{
	int n,a[1000][3],i,j,s=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		
	for(j=0;j<3;j++)
	{
	for(i=0;i<n;i++)
	{
		s=s+a[i][j];
	}
	if(s!=0)
	{
		printf("NO\n");
		break;
	}
	}
	if(s == 0)
	printf("YES\n");
	
}
