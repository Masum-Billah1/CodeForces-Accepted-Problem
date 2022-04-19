#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int s = (n-1)/9;
        cout << s+n<<endl;
    }
}
