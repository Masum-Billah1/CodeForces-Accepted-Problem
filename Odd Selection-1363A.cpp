    #define ll long long int
    #define na 1000000
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int test;
    	cin >> test;
    	while(test--){
    		int n,x,i,ao=0,ae=0,vo;
    		cin >> n >> x;
    		int a[n];
    		for(i=0;i<n;i++){
    			cin >> a[i];
    			if(a[i]%2)
    				ao++;
    			else
    				ae++;
    		}
    		if(ao == 0 || (ae==0 && x%2==0)){
    			cout <<"NO"<<endl;
    			continue;
    		}
    		if(ao%2==0)
    			vo = ao+ae-1;
    		else
    			vo = ao+ae;
    		if(vo >= x)	
    			cout <<"YES"<<endl;
    		else
    			cout <<"NO"<<endl;
    	}
    }
