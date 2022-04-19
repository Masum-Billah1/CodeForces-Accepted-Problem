#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[20];
    gets(a);
    if(strcmp(a," of week")==0){
        if(n == 5 ||n == 6)
            cout << 53<<endl;
        else
            cout <<52<<endl;
    }
    if(strcmp(a," of month")==0){
        if(n == 31)
            cout << 7<<endl;
        else if(n == 30)
            cout << 11 <<endl;
        else
            cout << 12 <<endl;
    }
}
