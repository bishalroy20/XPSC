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
    int n,x;
    cin >> n >> x;
    int sum = 0,cnt=0;
    map<int,int> mp;
    mp[sum] = 1;
    for(int i=0;i<n;i++){
        int c; cin >> c;
        sum+=c;
        cnt += mp[sum-x];
        mp[sum]++;
    } 
    cout << cnt << '\n';
}

int32_t main()
{
    fastread();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}


