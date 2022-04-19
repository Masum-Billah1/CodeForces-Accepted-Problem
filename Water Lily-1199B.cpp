#include<bits/stdc++.h>
using namespace std;
int main(){
    double h,l;
    cin >> h>>l;
    double d;
    d = ((l*l)-(h*h))/(2.0*h);
    printf("%.12lf\n",d);
}
