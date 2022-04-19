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
    int test;
    cin >> test;
    while(test--){
    	int a,b,c,d;
    	bool bb = 1;
    	cin >> a >> b >> c >> d;
    	int x,y,x1,x2,y1,y2,posx,posy,aaa = 0,bbb = 0;
    	cin >> x >> y >> x1 >> y1 >> x2 >>y2;
    	posx = x-a+b;
    	posy = y-c+d;
    	//cout <<"posx : "<<posx<<endl;
    	//cout <<"posy : "<<posy<<endl;
    	if(posx == x && x1 == x2 && a!=0)
    		bb = 0;
    	if(x1 >posx || x2<posx)
    		bb = 0;
    	if(posy == y && y1 ==y2 && c!=0)
    		bb = 0;
    	if(y1 > posy || y2 < posy)
    		bb = 0;
		if(bb == 1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;	 
   	}
}	
