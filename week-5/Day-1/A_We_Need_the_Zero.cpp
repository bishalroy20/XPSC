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
        vector<int> v(n);
        // set<int> s;
        for(int i=0;i<n;i++){
            cin >> v[i];
            // s.insert(v[i]);
        }

        ll xo = 0;
        for(int i=0;i<n;i++){
            xo ^= v[i];
        }

        if(n%2 ==0){
            if(xo == 0) cout << "0" << '\n';
            else cout << "-1" << '\n';
        }
        else{
            cout << xo << '\n';
        }
        
    }
    return 0;
}//pass