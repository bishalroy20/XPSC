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
        int n;cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        if(n==1){
            cout << 0 << '\n';
        } 

        else{
            int ans = v[n-1] - v[0];
            for(int i=1;i<n;i++){
                ans = max(ans, v[i] - v[0]);
            }
            for(int i=0;i<n-1;i++){
                ans = max(ans , v[n-1] - v[i]);
            }
            for(int i=1;i<=n-1;i++){
                ans = max(ans , v[i-1] - v[i]);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}//pass