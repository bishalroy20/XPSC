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
    vector<int> a(n),b(n);

    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    int sum1 = 0, sum2 = 0;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            if(a[i] < b[i]) sum2 += b[i];
            else sum1 += a[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i] == 1 && b[i] == 1){
            if(sum1 < sum2) sum1++;
            else sum2++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] == -1 && b[i] == -1){
            if(sum1 < sum2) sum2--;
            else sum1--;
        }
    }
    cout << min(sum1,sum2) << '\n';
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


