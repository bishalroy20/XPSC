/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int a[205][205];
ll fun(int i,int j,int n,int m){
    ll r = 0,idx=0;
    while(i-idx > -1 && j-idx >-1){
        r += a[i-idx][j-idx];
        idx++;
    }
    idx = 0;
    while(i-idx > -1 && j+idx <m){
        r += a[i-idx][j+idx];
        idx++;
    }
    idx = 0;
    while(i+idx < n && j+idx <m){
        r += a[i+idx][j+idx];
        idx++;
    }
    idx = 0;
    while(i+idx < n && j-idx >-1){
        r += a[i+idx][j-idx];
        idx++;
    }
    return (r-3*(a[i][j]));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = max(ans,fun(i,j,n,m));
            }
            
        }

        cout << ans << '\n';
    }
    return 0;
}//pass