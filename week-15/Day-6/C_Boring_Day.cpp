/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,l,r; cin >> n >> l >> r;
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    int L = 0, R = 0, cur = 0,ans = 0;
    while(L < n){
		while(R < n and cur < l){
			cur += v[R];
			R += 1;
        }
		if (l <= cur and cur <= r){
			ans += 1;
			L = R;
			cur = 0;
        }
		else{
			cur -= v[L];
			L += 1;
        }
    }
    cout << ans << '\n';
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}


