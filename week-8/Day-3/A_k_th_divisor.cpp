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

    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i*i <= n; ++i){
        if (n % i == 0){
            v.push_back(i);
            if(i != n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size() < k){
        cout << "-1" << '\n';
    }
    else{
        cout << v[k-1] << '\n';
    }
    
    return 0;
}