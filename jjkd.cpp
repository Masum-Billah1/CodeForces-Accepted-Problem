    #include<iostream>
    using namespace std;
    int main()
    {
    	int i,j,n,s = 0,t;
    	cin >> n;
    	int a[n][n];
    	int m = (n+1)/2;
    	
    	for(i=1;i<=n;i++)
    		for(j=1;j<=n;j++)
    			cin >> a[i][j];
    			
    	for(i=1;i<=n;i++)
    		for(j=1;j<=n;j++)
    			if(i == j||i+j == n+1||i==m||j == m)
    				s=s+a[i][j];
    	cout << s <<endl;
    }

