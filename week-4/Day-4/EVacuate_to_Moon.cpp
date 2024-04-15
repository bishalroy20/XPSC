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
        ll n,m,h;
        cin >> n >> m >> h;
        vector<ll> v1(n);
        vector<ll> v2(m);
        
        for(int i=0;i<n;i++){
            cin >> v1[i];
        }
        for(int i=0;i<m;i++){
            cin >> v2[i];
        }
        
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        ll ans = 0;
        ll mn = min(m,n);
        for(int i=0;i<mn;i++){
            ans += min(v1[i],v2[i]*h);
        }
        cout << ans << '\n';
    }
    return 0;
}//pass