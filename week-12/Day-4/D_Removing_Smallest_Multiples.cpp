/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<bool> v(n + 1, false);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            v[i + 1] = true;  
        }
    }

    vector<int> cost(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (v[j]) break;
            if (cost[j] == 0) cost[j] = i;  
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!v[i]) ans += cost[i];
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


