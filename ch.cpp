#include<bits/stdc++.h>
//#include<bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 2e5 + 5;

int n, k;
int a[N];

bool check(int x, int cur)
{
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(!cur)
		{
			ans++;
			cur ^= 1;
		}
		else
		{
			if(a[i] <= x)
			{
				ans++;
				cur ^= 1;
			}
		}
	}
	return ans >= k;
}

int binsearch(int lo, int hi)
{
	while(lo < hi)
	{
		int mid = (lo + hi) / 2;
		if(check(mid, 0) || check(mid, 1))
			hi = mid;
		else
			lo = mid + 1;
	}
	return lo;
}

int32_t main()
{
	IOS;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int ans = binsearch(1, 1e9);
	cout << ans;
	return 0;
}
