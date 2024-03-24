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

    ll a,b; cin >> a >> b;
    ll cnt = 0;

    if (b >= 0 && b <= 2*a) {
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= a; j++) {
            int k = b - i - j;
            if (k >= 0 && k <= a) {
                cnt++;
            }
        }
    }
    }
    else{
        cout << "1" << '\n';
        return 0;
    }
    cout << cnt << '\n';
    return 0;
}//pass