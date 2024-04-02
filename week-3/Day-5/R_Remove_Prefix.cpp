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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        map<int ,int> mp;
        int cnt = 0;
        for(int i=n-1;i>=0;i--){
            mp[v[i]]++;
            if(mp[v[i]] > 1){
                break;
            }
            cnt++;
            
        }

        cout << n-cnt << '\n';
    }
    return 0;
}//pass