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

            
            vector<int> v(n);
            for(int i=0;i<n;i++){
                cin >> v[i];
            }
            map<int,int> mp;
            for(int i=0;i<n;i++){
                mp[v[i]]++;
            }
            int mx = 0;
            for(auto i:mp){
                mx = max(mx,i.second);
            }
            // cout << mx << '\n';
            int ans = 0;
            while(mx < n){
                int rem = n-mx;
                int add = mx;
                ans++;
                ans += min(add,rem);
                mx += min(add,rem);
            }
            cout << ans << '\n';

    }
    return 0;
}

