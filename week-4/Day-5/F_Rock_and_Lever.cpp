/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> a(n);

    map<int,int> cnt;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        cnt[__lg(x)]++;
    }

    // for(int i=0;i<n;i++){
    //     cout << __lg(a[i]) << '\n';
    // }
    ll ans = 0;
    for(auto [x,y] : cnt){
        // cout << x << " " << y << '\n';
        ans += (1LL * y*(y-1)) /2;
    }
    cout << ans << '\n';
    }
    return 0;
}//pass //