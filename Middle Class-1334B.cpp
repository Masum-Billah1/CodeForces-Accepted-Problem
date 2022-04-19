#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,x,i;
        long long int s1=0,s2=0,temp;
        cin >> n >> x;
        int arr[n];
        for(i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i] >=x){
                s1 = s1+arr[i]-x;
                arr[i]=0;
            }
            else{
                arr[i] = x-arr[i];
            }
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            s2 = s2+arr[i];
            if(s2>s1){
                temp = i;
                break;
            }
        }
        cout << i << endl;
    }
}
//Dedicated to Jannatun Ferdous Srity...
