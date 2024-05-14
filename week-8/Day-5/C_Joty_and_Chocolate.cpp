/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define pii pair<ll,ll>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;

long long gcd(long long a, long long b) {
    return __gcd(a, b);
}

long long lcm(long long a, long long b) {
    return ((a / gcd(a, b)) * b);
}

void solve(){
    long long n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    overlap = (n / lcm(a, b));
    ans -= (overlap * (p + q));
    ans += (overlap * max(p, q));

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


