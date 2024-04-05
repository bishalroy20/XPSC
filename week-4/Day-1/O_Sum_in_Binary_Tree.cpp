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
        ll n; cin >> n;

        ll sum = 0;
        while(n >= 1){
            sum += n;
            n /= 2;
        }
        cout << sum << '\n';
    }
    return 0;
}//pass