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
    int a,b;
    cin >> a >> b;
    if(a > b) swap(a,b);

    if((2*a) < b){
        cout << "NO" << '\n';
    }
    else{
        a = a%3;
        b = b%3;
        if(a > b) swap(a,b);
        if((a == 0 && b == 0) || (a == 1 && b == 2)){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
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


