#include<bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b; cin >> a >> b;
    int x, y , z;
    x = a*b;
    y = a;
    z = x + y;
    if(b == 1){
        no;
    }
    else{
        yes;
        cout << x << " " << y << " " << z << '\n';
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


