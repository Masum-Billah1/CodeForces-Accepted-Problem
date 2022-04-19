        #include<bits/stdc++.h>
        using namespace std;
        int main(){
        	int test;
        	cin >> test;
        	while(test--){
        		long long int n,k,c=0,l;
        		cin >> n >> k;
        		if(n%2==0 && k%2==0)
        			c=1;
        		else if(n%2==1&&k%2==1)
        			c=1;
        		l = k*k;
        		if(c == 1 && l<=n)
        			cout <<"YES"<<endl;
        		else
        			cout <<"NO"<<endl;
        	}
        }
