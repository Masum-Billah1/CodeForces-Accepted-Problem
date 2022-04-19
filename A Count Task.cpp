#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
    int i,s=0;
    for(i=a;i>0;i--)
        s = s+i;
    return s;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        int ss=0,l,i,a[26]={0};
        cin >> s;
        l = s.size();
        for(i=0;i<l;i++)
        {
            a[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
            ss = ss+sum(a[i]);
        cout << ss <<endl;
    }
}
