#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<set>
#include<map>
using namespace std;
#define ll long long int
#define ff first
#define mo 10000007
#define ss second
#define testcase ll t;cin>>t;while(t--)
ll Mgcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return Mgcd(b, a % b); 
}
ll Mlcm(ll a, ll b)
{
    return (a*b) / Mgcd(a, b);
}
ll zero(ll n){
    ll cnt=0;
    for(ll i=5;;i*=5){
        cnt+=n/i;
        if(n/i==0)break;
    }
    return cnt;
}
        
void solve(){
    ll n,k,i,j;
    cin>>n>>k;
    string s;
    cin>>s;
    ll pre=-1;
    for(i=0;i<n;i++){
        if(s[i]=='*'){
            pre=i;
            break;
        }
    }
    ll cnt=0;
    if(pre==-1){
        cout<<cnt<<endl;
        return;
    }
    cnt++;
    for(i=pre;i<n;){
        for(j=min(pre+k,n-1);j>pre;j--){
            if(s[j]=='*'){
                cnt++;
                break;
            }
        }
        
        if(j<=pre)break;
        pre=j;
        i=pre;
    }
    
    cout<<cnt<<endl;
    
 
}
int main(){
   testcase{
       solve();
   }
}
