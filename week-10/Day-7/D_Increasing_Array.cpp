/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int

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

    int ans = 0;
    for(int i=1;i<n;i++){
        if(v[i-1] > v[i]){
            ans += v[i-1] - v[i];
            v[i] = v[i-1];
        }
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


