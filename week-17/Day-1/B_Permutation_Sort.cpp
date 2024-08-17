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
    for(int i=0;i<n;i++) cin >> v[i];
    
    
    if(is_sorted(v.begin(),v.end())) cout << 0 << '\n';
    else{
        if(v[0] == 1 || v[n-1] == n){
            cout << 1 << '\n';
        }
        else if(v[0] == n && v[n-1] == 1){
            cout << 3 << '\n';
        }
        else{
            cout << 2 << '\n';
        }
    }

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


