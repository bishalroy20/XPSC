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

    ll n,s;
    cin >> n >> s;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    ll l=0,r=0,ans=0,sum = 0;
    while(r < n){
        sum += v[r];
        if(sum <= s){
            ans += (r-l+1);
        }
        else{
            while(sum > s && l <r){
                sum -= v[l];
                l++;
            }
            if(sum <= s){
                ans += (r-l+1);
            }
        }
        r++;
    }
    
    cout << ans << '\n';
    return 0;
}//pass