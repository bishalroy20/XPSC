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
        ll x; cin >> x;
    
        cout << x-__bit_floor(x) << " " << __bit_floor(x) << '\n';
    }

    return 0;
}//pass