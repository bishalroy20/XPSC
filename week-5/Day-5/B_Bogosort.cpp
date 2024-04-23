/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    if(v.size() == 1) cout << v[0] << '\n';
    else{
        sort(v.begin(),v.end(),greater<int> ());

        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << '\n';
    }
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