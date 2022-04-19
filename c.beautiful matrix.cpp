#include <stdio.h>
int main()
{
	int i,j,a[5][5],t1,t2,s;
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j] == 1)
			{
				t1 = i;
				t2 = j;
			}
		}
		if(t1 >= 2 && t2 >= 2)
			s = (t1-2)+(t2-2);
		else if(t1 >=2 && t2 <= 2)
			s = (t1-2)+(2-t2);
		else if(2 >= t1 && t2 >=2)
			s = (2-t1)+(t2-2);
		else
			s = (2-t1)+(2-t2);
		
		printf("%d\n",s);
}
