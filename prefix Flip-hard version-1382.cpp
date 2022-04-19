    #include <bits/stdc++.h>
    using namespace std;
    int t, n;
    string a, b;
    int main() {
        cin >> t;
        while(t--) {
            cin >> n >> a >> b;
            bool flip = false;
            int idx = 0;
            vector<int> ops;
            for(int i = n - 1; i >= 0; i--) {
                if(flip ^ (a[idx] == b[i])) {
                    ops.push_back(1);
                }
                ops.push_back(i + 1);
                if(flip) idx -= i;
                else idx += i;
                flip = !flip;
                cout <<"idx : "<<idx<<endl;
            }
            cout << ops.size() << ' ';
            for(int i=0;i<ops.size();i++)
            	cout << ops[i]<< " ";
            cout << '\n';
        }
    }
