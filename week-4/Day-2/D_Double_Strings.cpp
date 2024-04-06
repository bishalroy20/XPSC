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
        map<string, bool> mp;
        vector<string> v(n);
        set<string> word;

        for(int i = 0; i < n; ++i){
            cin >> v[i];
            word.insert(v[i]);
        }

        for(int i = 0; i < n; i++){
            for(int j = 1; j < v[i].size(); j++){
                string prefix = v[i].substr(0, j);
                string suffix = v[i].substr(j);
                if(word.count(prefix) && word.count(suffix)){
                    mp[v[i]] = true;
                    break;
                }
            }
        }

        for(int i = 0; i < n; ++i){
            if(mp[v[i]]) cout << "1";
            else cout << "0";
        }
        cout << '\n';
    }

    return 0;
}