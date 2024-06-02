/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

template<typename T> using pbds = tree<T, null_type , less_equal<T>,rb_tree_tag , tree_order_statistics_node_update>;

void solve()
{
    int m,n; cin >> m >> n;
    pbds<int> p;
    vector<int> v(n);
    for(int i=0;i<m;i++){
        int val; cin >> val;
        p.insert(val);
    }
    for(int i=0;i<n;i++){
        cin >> v[i];
        int x = p.order_of_key(v[i]+1);
        cout << x << " ";
    }
    cout << '\n';
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


