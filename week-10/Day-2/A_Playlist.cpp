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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    if(v.size() == 1){
        cout << 1 << '\n';
        return;
    }
    int l=0,ans=0;
    set<int> s;
    for(int i=0;i<n;i++){
        while(s.count(v[i])){
            s.erase(v[l]);
            l++;
        }
        s.insert(v[i]);
        ans = max(ans,(int)s.size());
    }
    
    cout << ans << '\n';
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


