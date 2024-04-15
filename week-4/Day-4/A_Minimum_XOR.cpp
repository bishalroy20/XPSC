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
        int n,xo=0; cin >> n;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
            xo ^= v[i];
        }
        
        int ans = xo;
        for(int i=0;i<n;i++){
            // xo ^= v[i];
            ans = min(ans,(xo^v[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}//pass