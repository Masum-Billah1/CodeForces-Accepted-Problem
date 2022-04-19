#include <bits/stdc++.h>
using namespace std; 
int main() {
    int t;
   	cin >> t;
   	while(t--){
    	string c;
    	int x,y,posX,posY,ans = 0;
    	map<pair<int,int>,int> pp;
   		posX = posY = 0;
   		pp[make_pair(posX, posY)]++;
   		cin >> c;
   		for(int i = 0; i < c.size(); i++){  
  			x = posX; y = posY;
    		if(c[i] == 'N') 
				posX++;
    		else if(c[i] == 'S') 
				posX--;
			else if(c[i] == 'E') 
				posY++;
    		else 
				posY--;			
    		if(!pp[make_pair(posX + x, posY + y)]){
    			ans += 5;
    			pp[make_pair(posX + x, posY + y)]++;
    		}
			else 
				ans++;
    	}
    	cout<<ans<<endl;;
   	}
}
