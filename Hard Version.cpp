#include<bits/stdc++.h>
using namespace std;
int main(){
    	int n,i,temp =0,j,l=1,r=1,temp1,temp2;
    	cin >> n;
    	int a[n];
    	for(i=0;i<n;i++)
    		cin >> a[i];
    	if(n==1){
    		cout << 1 <<endl<<'R'<<endl;
    		return 0;
		}
    	string str;
    	for(i=0,j=n-1;i<=j;){
    		if(a[i]==a[j] && a[i]>temp){
				temp1 = a[i];
				temp2 = a[j];
				i++;
				for(;i<n;i++){
					if(a[i]>temp1){
						l++;
						temp1 = a[i];
					}
					else
						break;
				}
				j--;
				for(;j<n;j--){
					if(a[j]>temp2){
						r++;
						temp2 = a[j];
					}
					else
						break;
				}
				if(l>r){
					for(i=0;i<l;i++){
						str+='L';
					}
				}
				else{
					for(i=0;i<r;i++){
						str+='R';
					}
				}
				break;
			}
    	if(i==j & a[i]>temp){
    		str+='L';
    		i++;
    	}
    	else if(a[i]<a[j] && a[i]>temp){
   			temp = a[i];
   			str+='L';
   			i++;
   		}
    	else if(a[j]<a[i] && a[j]>temp){
    		temp = a[j];
    		str+='R';
    		j--;
    	}
    	else if(a[i]>temp){
    		temp = a[i];
    		str+='L';
    		i++;
   		}
    	else if(a[j]>temp){
    		temp = a[j];
    		str+='R';
    		j--;
   		}
    	else
    		break;
   	}
   	if(str.size()>n){
   		cout << n<<endl;
   		for(i=0;i<n;i++){
   			cout<<str[i];
		}
		return 0;
	}
   	cout << str.size()<<endl;
   	cout << str<<endl;
}
//Dedicated to Sumaiya Tasnim Fiha.
