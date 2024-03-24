/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

void solve(){
    ll n,k; cin >> n >> k;
        string s; cin >> s; 
        map<char,ll> mp;
        for(auto i : s){
            mp[i]++;
        }
        
        ll cnt=0;
        for(auto i : mp){
            if(i.second%2)  cnt++;
            if(cnt-1 > k){
                no 
                return;
            }
        }
        yes
        
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}//pass