#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int ans = n-1;
    
    for(auto i : s){
        if(i == 'B') ans--;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'A') ans--;
        else break;
    }
    if(ans >= 0)    cout << ans << '\n';
    else            cout << 0 << '\n';
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


