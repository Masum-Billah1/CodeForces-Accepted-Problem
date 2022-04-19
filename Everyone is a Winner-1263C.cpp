#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		vector<int>v;
		int n,i;
		cin >> n;
		for(i=0;i<=sqrt(n);i++){
			v.push_back(i);
			if(i!=0){
				v.push_back(n/i);
			}
		}
		if(v[v.size()-1]==v[v.size()-2])
			v.pop_back();
		sort(v.begin(),v.end());
		cout << v.size()<<endl;
		for(i=0;i<v.size();i++){
			cout << v[i]<<" ";
		}
		cout << endl;
	}
}

