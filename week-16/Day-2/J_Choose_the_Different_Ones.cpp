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
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n);
    vector<int> b(m);
    map<int,int> mp;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = 1;
        
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if (mp[b[i]] == 1) {
            mp[b[i]] = 4;
        }
        else if(mp[b[i]] == 0){
            mp[b[i]] = 2;
        }
    }
    
    int x = k/2 , y = k/2 ;
    for (int i = 1; i <= k; i++) {
        if(mp[i] == 1) x--;
        if(mp[i] == 2) y--;
        if(mp[i] == 0) x = -1;
    }
    
    if(x >= 0 && y >= 0) yes;
    else no;
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


