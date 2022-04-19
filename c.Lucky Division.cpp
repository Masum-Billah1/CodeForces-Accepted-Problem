#include<Stdio.h>
int main()
{
	int num,t1,t2;
	scanf("%d",&num);
	
	for(t1=47,t2=74;t1<500,t2<500;t1=t1+400,t2=t2+400)
	if(num%t1 == 0||num%t2==0)
	{
	printf("YES\n");
	return 0;
	}
	
	if(num == 4||num == 7||num%4 == 0||num%7==0)
	{
	printf("YES\n");
	return 0;
	}
	else if(num/10==47||num%10==74)
	{
	printf("YES\n");
	return 0;
	}
	else
	printf("NO\n");
	
	return 0;
}
