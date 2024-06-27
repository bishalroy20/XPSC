#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    for(auto &i : v) cin >> i;

    int pos = -1,mn = INT_MAX;
    sort(v.begin(),v.end());

    if(n == 2){
        cout << v[0] << " " << v[1] << '\n';
        return;
    }
    for(int i=0;i<n-1;i++){
        int d = abs(v[i+1] - v[i]);
        if(mn > d){
            pos = i+1;
            mn = d;
        }
    }

    for(int i = pos; i< n;i++){
        cout << v[i] << " ";
    }
    for(int i= 0;i<pos;i++){
        cout << v[i] << " ";
    }
    cout << '\n';
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


