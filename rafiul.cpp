#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,k;
    cin >> n >> k;
    int a[n+10];
    int c = 0;
    for(int i = 1; i <= n ; i++) {
    cin >> a[i];
    if(a[i] == k) c++;
    }
    if(!c){ cout <<"no"<<endl;continue;}
    if(c == n) { cout <<"yes"<<endl;continue;} 
    int ok = 0;
    for(int i = 1; i <= n; i++){
     if(i<n && a[i] >= k && a[i+1] >= k) 
	 	ok = 1;
     if(i+1 <n && (a[i] >= k) +(a[i+1] >= k) +(a[i+2] >= k) >= 2) 
	 	ok = 1;
    }
    if(ok) cout<<"yes"<<endl;
    else cout <<"no"<<endl;
	}
} 
