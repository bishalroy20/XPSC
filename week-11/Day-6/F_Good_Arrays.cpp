/*
    author : BishalRoy20
*/
//pass
#include<bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    int cnt1 = 0, sum = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] == 1){
            cnt1++;
        }
        sum += v[i];
    }
    if(n == 1){
        no;
    }
    else if((sum-n) >= cnt1){
        yes;
    }
    else{
        no;
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


