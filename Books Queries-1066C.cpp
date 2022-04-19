#include<bits/stdc++.h>
using namespace std;
int b[200001];
int main(){
	int q,i,l=0,r=0;
	cin >> q;
	for(i=0;i<q;i++){
		char ch;
		int id;
		cin >> ch >> id;
		if(i == 0){
			b[id] = l;
			l--;
			r++;
		}
		else{
			if(ch == 'L'){
				b[id] = l;
				l--;
			}
			else if(ch == 'R'){
				b[id] = r;
				r++;
			}
			else{
				cout << min(abs(b[id]-l),abs(b[id]-r))-1 <<endl;
			}
		}
	}
}
