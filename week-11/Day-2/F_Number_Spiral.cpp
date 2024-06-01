/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int

#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
void solve()
{
    int x,y;
    cin >> x >> y;
    if(x < y){
        int ans;
        if(y%2 != 0){
            ans = (y*y)-x+1;
        }
        else{
            ans = (y-1)*(y-1)+x;
        }
        cout << ans << '\n';
    }
    else{
        int ans;
        if(x%2 != 0){
            ans = (x-1)*(x-1)+y;
        }
        else{
            ans = (x*x)-y+1;
        }
        cout << ans << '\n';
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


