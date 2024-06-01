/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int

#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n,m; cin >> n >> m;
    multiset<int> h;
    for(int i=0;i<n;i++){
        int price; cin >> price;
        h.insert(price);
    }

    for(int i=0;i<m;i++){
        int nprice; cin >> nprice;
        
        auto it = h.upper_bound(nprice);
        if(it == h.begin()){
            minus;
            // continue;
        }
        else{
            cout << *(--it) << '\n';
            h.erase(it);
        }
    }
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


