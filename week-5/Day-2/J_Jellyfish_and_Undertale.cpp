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
        ll a,b,c;
        cin >> a >> b >> c;
        
        ll ans = b;
        
        while(c--){
            ll val; 
            
            cin >> val;
            ans = ans + min(a-1,val);
        }
        cout << ans << '\n';
    }
    return 0;
}//pass