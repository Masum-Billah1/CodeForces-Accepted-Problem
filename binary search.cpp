#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter the size if arrar : ";
	cin >> n;
	int a[n],i,l=0,h=n-1,mid,result,q;
	for(i=0;i<n;i++)
		cin >> a[i];
	cout <<"Enter the number you want to search : ";
	cin >> q;
	while(l<=h){
		mid = l+(h-l)/2;
		cout << "Mid : "<<mid<<endl;
		if(a[mid]==q){
			cout <<"the index is : "<<mid<<endl;
			return 0;
		}
		else if(a[mid]>q){
			h = mid-1;
		}
		else
			l = mid+1;
	}
	cout << "The index is not found"<<endl;
	
}
