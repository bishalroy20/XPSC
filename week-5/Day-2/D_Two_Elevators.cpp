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
        int ans1 = a-1;
        int ans2 = abs(b-c) + abs(c-1);
        
        if(ans1 > ans2) cout << "2" << '\n';
        else if(ans1 < ans2) cout << "1" << '\n';
        else cout << "3" << '\n';
    }
    return 0;
}//pass