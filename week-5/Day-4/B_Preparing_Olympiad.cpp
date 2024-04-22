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

    ll n,l,r,x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    ll cnt = 0;
    for (int i = 1; i < (1 << n);i++) {
        ll sum = 0;
        int mn = INT_MAX, mx = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
        }
        if (sum >= l && sum <= r && (mx - mn) >= x) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}//pass