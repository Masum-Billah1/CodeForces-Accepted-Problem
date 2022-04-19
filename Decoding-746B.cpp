//I learnt this technique from ankar's code
// It was about 3 weeks ago.//Thanks ankar
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	string str,rslt;
	cin >> str;
	if(n%2==1){
		for(i=0;i<n;i++){
		if(i%2 == 0)
			rslt=rslt+str[i];
		else
			rslt = str[i]+rslt;
		}
	}
	else{
		rslt = rslt+str[0];
		for(i=1;i<n;i++){
			if(i%2 == 1)
				rslt=rslt+str[i];
			else
				rslt = str[i]+rslt;
		}
	}
	
	cout << rslt << endl;     
	
}
//Dedicated to Shariful Islam Nirob
