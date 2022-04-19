#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    int a[10];
    string str;
    cin >> str;
    for(i=0;i<9;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        int temp = str[i]-'0';
        if(a[temp-1] > temp){
        	str[i] = a[temp-1]+'0';
        	while(a[temp-1] >= temp){
        		i++;
        		temp = str[i]-'0';
        		if(a[temp-1] >= temp){
	        		str[i] = a[temp-1]+'0';	
        		}
			}
			break;
		}
            
    }
    cout << str << endl;
}
