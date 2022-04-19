    #include <bits/stdc++.h>
     
    #define P(X) cout<<"db "<<X<<endl;
    #define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
    #define P3(X,Y,Z) cout<<"d3 "<<X<<" "<<Y<<" "<<Z<<endl;
    #define SQ(x) ((x) * (x))
     
    #define ll long long
    #define pii pair<ll,ll>
     
    #define bchk(n,i) (bool)(n&(1<<i))
    #define bon(n,i) (n|(1<<i))
    #define boff(n,i) n=n&(~(1<<i))
     
    #define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
    #define MAX3(a,b,c) max(a,max(b,c))
    #define MS(XX,YY) memset(XX,YY,sizeof(XX));
    #define FastIO ios_base::sync_with_stdio(0);cin.tie(nullptr);
    #define eps 10e-9
    #define MX 1000005
    #define MD 1000000007
     
    using namespace std;
    ll m,n;
    pii pr[200009];
    int main()
    {
        ll i,j,test=1,cas=0;
        ll a,b;
     
    	#ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    	#endif
        scanf("%lld",&test);
        while(test--){
            scanf("%lld",&n);
            for(i=0;i<n;i++){
                scanf("%lld",&pr[i].first);
            }
     
            for(i=0;i<n;i++){
                scanf("%lld",&pr[i].second);
            }
            sort(pr,pr+n);
            ll sm=0,res=pr[n-1].first;
            for(i=n-1;i>=0;i--){
                sm+=pr[i].second;
                if(i){
                    ll c=max(sm,pr[i-1].first);
                    res=min(res,c);
                }
                else {
                    res=min(res,sm);
                }
            }
     
            printf("%lld\n",res);
        }
        return 0;
    }
