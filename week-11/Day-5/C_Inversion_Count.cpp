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
template<typename T> using pbds = tree<T, null_type , less<T>,rb_tree_tag , tree_order_statistics_node_update>;
void solve()
{
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int ans = 0;
    pbds<int> p;
    for(int i= n-1;i>=0;i--){
        ans += p.order_of_key(v[i]);
        p.insert(v[i]);
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
}//pass


