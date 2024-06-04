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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int l=0, r=0;
    pbds<pair<int,int>> p;
    while(r < n){
        p.insert({v[r] , r});
        if(r-l+1 == k){
            int pos = k/2;
            if(k % 2 == 0){
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({v[l] , l});
            l++;
        }
        r++;
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
}//pass


