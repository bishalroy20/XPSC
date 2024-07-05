/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>

#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    // int n; cin >> n;
    string a,b; cin >> a >> b;

    int ans = a.size() + b.size();
    for(int i=0;i<b.size();i++){
        int k = i;
        for(int j=0;j<a.size() && k <b.size();j++){
            if(a[j] == b[k]){
                k++;
            }
        }
        int x = i+a.size()+(b.size()-k);
        ans = min(ans,x);
    }
    cout << ans << '\n';
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


