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
	//cin >> test;
	while(test--){
		int i,j,temp1,temp2,temp,prod=1,mx=1;
		veci v;
		temp1 = temp2 = 1;
		string s,t;
		cin >> s;
		t = s;
		if(s[0]=='1'){
			prod = pow(9,s.size()-1);
			cout << prod <<endl;
			continue;
		}
		int c = 0;
		for(i=0;i<s.size();i++){
			if(s[i]=='9')
				c++;
		}
		if(c == s.size()){
			prod = pow(9,c);
			cout << prod<<endl;
			continue;
		}
		t[0]=s[0]-1;
		for(i=1;i<s.size();i++)
			t[i]='9';
		for(i=0;i<s.size();i++){
			mx*=(t[i]-'0');
		}
		temp1 = s[0]-'0';
		temp2 = t[0]-'0';
		//cout <<"temp1 : "<<temp1<<endl;
		v.pus(temp1);
		for(i=1;i<s.size();i++){
			temp = s[i]-'0';
			temp1 *=(temp-1);
			temp2 *=(t[i]-'0');
			if(i==s.size()-1)
				temp1 *=temp;
			if(temp1 >= temp2){
				v.pus(s[i]-'0');
				temp1 /=(temp-1);
				temp1 *=temp;
			}
			else{
				v[i-1]=v[i-1]-1;
				for(j=i;j<s.size();j++){
					v.pus(9);
				}
				break;
			}
		}	
		for(i=0;i<v.size();i++){
			//cout <<v[i]<<" ";
			prod*=v[i];
		}
		cout << max(mx,prod) << endl;
	}
}

