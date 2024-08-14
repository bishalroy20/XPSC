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
void solve()
{
    int n; cin >> n;
    vector<int> v(n),a(33,0);
    for(auto &i : v) cin >> i;
    

    int cnt = 0;
    
    for(int i=0;i<n;i++){
        int x = v[i],c = 0;
        while(x > 0){
            x /= 2;
            c++;
        }
        a[c]++;
    }
    for(int i=0;i<=32;i++){
        if(a[i] >= 2){
            cnt += (a[i]*(a[i]-1))/2;
        }
    }
    cout << cnt << '\n';
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


