#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int n,i,j,c=0;
	cin >> n;
	getchar();
	char a[n][101];
	//char b[6][101];
	for(i=0;i<n;i++)
		gets(a[i]);


	char b[6][101]={ {"purple"},{"green"},{"blue"},{"orange"},{"red"},{"yellow"} };

    cout <<6-n<<endl;

	for(i=0;i<6;i++){
		for(j=0;j<n;j++)
		{
			if(strcmp(b[i],a[j])==0)
			c = 1;
		}
		if(c == 0)
		{
			if(i==0)
				cout<<"Power\n";
			else if(i == 1)
				cout <<"Time\n";
			else if(i == 2)
				cout <<"Space\n";
			else if(i == 3)
				cout <<"Soul\n";
			else if(i == 4)
				cout <<"Reality\n";
			else if(i == 5)
				cout <<"Mind\n";

		}
		c = 0;
	}

}
