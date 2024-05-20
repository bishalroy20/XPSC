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

int find_divisor(int x){
    for(int i=2;i*i <= x;i++){
        if(x%i ==0){
            return i;
        }
    }
    return -1;
}

void solve()
{
    int l,r; cin >> l >> r;
    
    if(r <= 3){
        minus;
    }
    else if(r > l){
        if(r%2 ==0){
            cout << 2 << " " << r-2 << '\n';
        }
        else{
            r--;
            cout << 2 << " " << r-2 << '\n';
        }
    }
    else{
        if(find_divisor(l) == -1) minus;
        else cout << find_divisor(l) << " " << l - find_divisor(l) << '\n';
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


