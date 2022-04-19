//binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,s=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		s = s+a[i];
		a[i] = s;
	}
	int test;
	cin >> test;
	while(test--){
		int q,l=0,h=n-1,mid,c=0;
		cin >> q;
		while(l<=h){
			mid = l+(h-l)/2;
			if(a[mid]==q){
				c=1;
				cout <<mid+1<<endl;
				break;
			}
			else if(a[mid]>q){
				h = mid-1;
			}
			else
				l = mid+1;
		}
		if(c==0){
			if(a[mid] > q){
				cout << mid+1<<endl;
			}
			else{
				while(a[mid]<q){
					mid++;
					if(a[mid] > q){
						cout << mid+1<<endl;
						break;
					}
				}	
			}
		}
	}
}
//dedicated to Sumaiya Tasnim Fiha
