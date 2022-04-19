    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,i,j;
        cin >> n;
        for(i=0; i<n; i++)
        {
            long long int a;
            //cin >> a;
            scanf("%I64d",&a);
            double d;
            int b,c,k=0;
            d = sqrt(a);
            b = sqrt(a);
            c = ceil(d);
            for(j=2;j<=sqrt(c);j++){
                if(a%j==0){
                    k=1;
                    break;
                }
            }
            if(a!=1 && b == c &&k==0)
                cout << "YES"<<endl;
            else
                cout <<"NO"<<endl;
        }
    }
