#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,round=0,al=0,bo=0,temp=0,i=0,j;
		cin >> n;
		j = n-1;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		i = 0;
		//cout <<"i : "<<i<<"j : "<<j<<endl;
		while(i<=j){
			int s = 0;
			for(;s<=temp;i++){
				if(i>j)
					break;
				s = s+a[i];
				al = al+a[i];
			}
			temp = s;
			//cout << "i : "<<i<<"j : "<<j<<endl;
			//cout << " s : "<< s <<endl;
			round++;
			if(i>j)
				break;
			s = 0;
			for(;s<=temp;j--){
				//cout <<"j : "<<j<<endl;
				if(i>j)
					break;
				s +=a[j];
				bo = bo+a[j];
			}
			temp = s;
			//cout << "i : "<<i<<"j : "<<j<<endl;
			//cout << " s : "<< s <<endl;
			round++;	
		}
		cout << round <<" "<<al <<" "<<bo<<endl;
	}
}
//Dedicated to Dumaiya Tasnim Fiha.
