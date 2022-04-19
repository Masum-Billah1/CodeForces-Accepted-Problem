	int main(){
    	IOS;
    	int test=1;
    	cin >> test;
    	while(test--){
    		int i;
    		string s;
    		bool yes = 1;
    		int x,n;
    		cin >> s >> x;
    		n = s.size();
    		string t(n,'1');
    		for(i=0;i<s.size();i++){
    			if(s[i]=='0' && i>=x){
    				t[i-x]='0';
    			}
    			if(s[i]=='0'&&i+x<n){
    				t[i+x]='0';
    			}
    		}
    		for(i=0;i<n;i++){
    			bool y = 1;
    			if(s[i]=='1') y = 0;
    			if(s[i]=='1'&&t[i-x]=='1'&&i>=x)
    				y = 1;
    			else if(s[i]=='1'&&t[i+x]=='1'&&(i+x)<n)
    				y = 1;
    			if(y == 0)
    				yes = 0;
    		}
    		if(yes == 0)
    			cout <<-1<<endl;
    		else
    			cout << t << endl;
    	}
    }
