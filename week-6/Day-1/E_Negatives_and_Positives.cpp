#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll ood = 0,sum=0;
        // ll mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < 0) {
                ood++;
                // mn = min(mn,v[i]);
                v[i] = -v[i];
            }
            sum += v[i];
        }
        if(ood%2 == 0){
            cout << sum << '\n';
        }
        else{
            sort(v.begin(),v.end());
            v[0] = -v[0];
            ll sum2 = 0;
            for(int i=0;i<n;i++){
                sum2 += v[i];
            }
            cout << sum2 << '\n';
        }
    }
    return 0;
}
