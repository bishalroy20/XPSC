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
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    // int cnt = 0;
    for(int i=0;i<n;i++){
        if(v[i] == 1){
            v[i]++; 
        }
    }
    int i = 0;
    while(i <= n-2){
        if(v[i+1]%v[i] == 0){
            v[i+1]++;
            // cnt++;
        }
        else{
            i++;
        }
    }
    
    for(int i=0;i<n;i++){
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


