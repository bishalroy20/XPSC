/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define pii pair<ll,ll>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin >> n;
	if(n%2 == 1) {
		int r = n;
		int l = 1;
		for(int i=1;i<=n;i++) {
			if(i%2==1) {
				cout << r << " ";
				r--;
			} 
            else {
				cout << l << " ";
				l++;
			}
		}
		cout << '\n';
	} 
    else {
		cout << -1 << '\n';
	}
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


