#include<bits/stdc++.h>
void solve(){
 
	 ll i,j, cnt1=0,cnt2=0,l=0;
	 
	 string s;
	 cin>>s;
	 for(i=0;i<s.size();i++){
	  if(s.substr(i,5)=="heavy")
	     cnt1++;
	   else if(s.substr(i,5)=="metal")
	     l+=cnt1;
	 }
	 cout<<l<<endl;
 
}
 
 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}
