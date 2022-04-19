#define ll long long
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 200000+5;
int n,k,a[na],i;
bool cheak(int x,int pos){
	int sum = 0;
	for(i=0;i<n;i++){
		if(pos){
			sum++;
			pos^=1;
		}
		else if(a[i]<=x){
			sum++;
			pos^=1;
		}
	}
	return sum>=k;
}
binary_search(int low,int high){
	while(low<high){
		int mid = (low+high)/2;
		if(cheak(mid,0)||cheak(mid,1))
			high = mid;
		else
			low = mid+1;
	}
	return low;
}
int main(){
	IOS;
	cin >> n >> k;
	for(int i=0;i<n;i++)
		cin >> a[i];
	cout << binary_search(1,1000000000)<<endl;
}

