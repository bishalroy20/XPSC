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

    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++){
        cin >> a[i];
    }

    vector<vector<int>> masks;
    for(int i=0;i<=m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            if((a[i] >> j) & 1){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        masks.push_back(v);
    }

    int ans = 0;
    vector<int> fedor = masks[m];
    for(int i=0;i<masks.size()-1;i++){
        vector<int> v = masks[i];
        int cnt = 0;
        for(int k=0;k<n;k++){
            if(fedor[k] != v[k]){
                cnt++;
            }
        }
        if(cnt <= k){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}//pass //