/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n; cin >> n;
    
    if(n == 1){
        cout << 1 << '\n';
        return;
    }

    if(n & 1) {
        cout << "-1" << '\n';
    }
    else{
        int j = 1;
        for(int i = n ; i > 0 ; i--){
            if(i & 1){
                cout << j << " ";
                j += 2;
            }
            else cout << i << ' ';
        }
        cout << '\n';
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


