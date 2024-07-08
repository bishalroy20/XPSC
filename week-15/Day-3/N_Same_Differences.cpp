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
    int n,ans = 0; cin >> n;
    
    map<int,int> mp;  
    for(int i=0;i<n;i++){
        int val; cin >> val;
        val = val - i;
        ans += mp[val];
        mp[val]++;
    }

    
    cout << ans << '\n';
    
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[j]-v[i] == j-i){
    //             ans++;
    //         }
    //     }
    // }
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


