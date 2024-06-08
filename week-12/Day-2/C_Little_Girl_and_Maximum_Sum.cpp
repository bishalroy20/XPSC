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
    int n,q;
    cin >> n >> q;
    vector<int> v(n),a(n+2);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    sort(v.begin(),v.end(),greater<int>());
    for(int i=1;i<=q;i++){
        int l,r; cin >> l >> r;
        l--; r--;
        a[l] += 1;
        a[r+1] -= 1;
    }

    for(int i=1;i<=n;i++){
        a[i] = a[i-1] + a[i];
    }
    sort(a.begin(),a.end(),greater<int>());

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (a[i]*v[i]);
    }
    cout << sum << '\n';
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


