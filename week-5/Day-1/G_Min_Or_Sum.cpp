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
        vector<ll> v(n);
        ll orr = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            orr |= v[i];
        }
        cout << orr << '\n';
    }
    return 0;
}//pass