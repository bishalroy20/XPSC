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
    int n,k;cin >> n >> k;
    vector<int> v(n*k);

    for(auto &i : v) cin >> i;

    int x = n*k, y = n/2 , sum = 0;
    for(int i=x-y-1,j = 0;j < k && i>=0;j++,i-=y+1){
        sum += v[i];
    }
    cout << sum << '\n';
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


