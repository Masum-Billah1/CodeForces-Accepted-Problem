#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,k;
    cin >> n >> m;
    if(n == 1 && m == 0){
        cout << 0 <<" "<< 0<< endl;
        return 0;
    }
    else if(m == 0){
        cout << -1 <<" "<< -1 <<endl;
        return 0;
    }

    string a(n,'0'),b;
    b = a;
    a[0] = '1';
    for(i = n-1;i >= 0;i--){
        if(m>9){
            a[i] = '9';
            b[n-i-1]='9';
            m=m-9;
        }
        else{
            b[n-i-1]=m+'0';
            if(i==0){
                a[i] = m+'0';
            }
            else
                a[i] = m-1+'0';
            m=0;
            break;
        }
    }
    if(m!=0){
        cout << -1 <<" "<< -1 <<endl;
    }
    else
        cout << a <<" "<< b <<endl;
}
//Dedicated to Sumaiya Tasnim Fiha
