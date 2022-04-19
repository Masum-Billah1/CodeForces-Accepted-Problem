    #include <bits/stdc++.h>
    using namespace std;
    //int cnt[100010];
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int cnt[100010] = {0};
            int n, mx = 0;
            cin >> n;
            map<int, int> mp;
            for(int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                cnt[a]++;
                mx = max(mx, cnt[a]);
                mp[a]++;
            }
            //cout << mx << endl;
            int t = 0;
            for(auto i:mp)
            {
                if(i.second == mx)
                    t++;
            }
            cout << ((n-t)/(mx-1))-1 << endl;
        }
    }
