#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,in,i,result=0;
		cin >> n;
		seti a;
		seti::reverse_iterator it;
		seti::iterator itt;
		for(i=0;i<n;i++){
			cin >> in;
			if(in%2==0)
				a.insert(in);
		}
		for(it=a.rbegin();it!=a.rend();it++){
			int temp = *it;
			temp/=2;
			while(temp){
				result++;
				if(temp%2==1){
					break;
				}
				if(a.count(temp)==1){
					a.erase(a.find(temp));
				}
				temp/=2;
			}
		}
		cout << result << endl;
	}
}

