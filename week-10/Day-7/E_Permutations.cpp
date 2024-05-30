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
    if(n == 1){
        cout << 1 << '\n';
    }
    else if(n < 4){
        cout << "NO SOLUTION\n"; 
    }
    else if(n == 4){
        cout << "2 4 1 3\n";
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2 != 0){
                cout << i << " ";
            }
        }
        for(int i=1;i<=n;i++){
            if(i%2 == 0){
                cout << i << " ";
            }
        }
        cout << '\n';
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
}


