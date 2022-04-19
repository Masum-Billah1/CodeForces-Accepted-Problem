    #define	 ll     long long
    #define  seti   set<int>
    #define  setl   set<ll>
    #define  veci   vector<int>
    #define  vecl   vector<ll>
    #define  pus(a) push_back(a)
    #define  pop()  pop_back()
    #define  Min(v)   *min_element(v.begin(),v.end())
    #define  Max(v)   *max_element(v.begin(),v.end())
    #define  IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #include<bits/stdc++.h>
    using namespace std;
    const int na = 1e5;
    using namespace std;
    int main(){
    	IOS;
    	int test=1;
    	cin >> test;
    	while(test--){
    		string a;
    		char i,j;
    		int k,mx=0,c=0;
    		cin >> a;
    		for(i='0';i<='9';i++){
    			for(j='0';j<='9';j++){
    				bool b = 0;
    				c = 0;
    				if(i !=j){
    					//cout <<i<<j<<endl;
    					for(k=0;k<a.size();k++){
    						if(b == 0 && a[k]==i){
    							b = 1;
    						}
    						else if(b == 1 && a[k]==j){
    							c++;
    							b = 0;
    						}
    					}
    				}
    				//cout <<"c : "<<c<<endl;
    				mx = max(mx,(c*2));
    			}
    		}
    		int b[10]={0};
    		for(k=0;k<a.size();k++){
    			b[a[k]-'0']++;
    		}
    		for(k=0;k<10;k++)
    			mx = max(mx,b[k]);
    		cout << a.size()-mx<<endl;
    	}
    }
