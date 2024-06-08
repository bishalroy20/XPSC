/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n; 
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int l, r; 
        cin >> l >> r;
        
        mp[l]++;
        mp[r + 1]--;
    }

    int mx = 0;
    int current_sum = 0;
    
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        current_sum += it->second;
        mx = max(mx, current_sum);
    }
    
    cout << mx << '\n';
}

int32_t main() {
    fastread();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

