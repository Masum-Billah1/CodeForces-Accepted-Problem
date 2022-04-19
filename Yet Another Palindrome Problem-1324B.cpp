    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t,i,j;
        cin >> t;
        while(t--){
            int n,k=0;
            cin >> n;
            int a[n];
            for(i=0;i<n;i++)
                cin >> a[i];
            for(i=0;i<n-2;i++){
                if(a[i]==a[i+2])
                    k=1;
            }
            for(i=0;i<n;i++){
                for(j=0;j!=i,j<n;j++){
                    if(a[i]==a[j]&&abs(i-j)!=1 && j!=i)
                        k=1;
                }
            }
            if(k==1)
                cout <<"YES"<<endl;
            else
                cout <<"NO"<<endl;
        }
    }
