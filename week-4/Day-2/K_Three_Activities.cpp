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
        vector<pair<ll,ll>> v1,v2,v3;
        vector<ll> a(n),b(n),c(n);
        
        for(int i=0;i<n;i++){
            cin >> a[i];
            v1.push_back({a[i],i});
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            v2.push_back({b[i],i});
        }
        for(int i=0;i<n;i++){
            cin >> c[i];
            v3.push_back({c[i],i});
        }
        
       sort(v1.begin(),v1.end(),greater<>());
       sort(v2.begin(),v2.end(),greater<>());
       sort(v3.begin(),v3.end(),greater<>());
       
       ll ans = 0;

       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second){
                    ans = max(ans,v1[i].first+v2[j].first+v3[k].first);
                }
            }
        }
       }
       cout << ans << '\n';
    }
    return 0;
}


