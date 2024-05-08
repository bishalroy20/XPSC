/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

ll result(vector<int> v,int n){
    ll one = 0,cnt=0;
    for(int i=0;i<n;i++){
        if(v[i] ==  1){
            one++;
        }
        else{
            cnt += one;
        }
    }
    return cnt;
}

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
        int index = -1;
        ll ans = result(v,n);
        for(int i=0;i<n;i++){
            if(v[i] == 0){
                v[i] = 1;
                index = i;
                break;
            }
        }
        ans = max(ans,result(v,n));
        if(index != -1){
            v[index] = 0;
        }
        for(int i=n-1;i>=0;i--){
            if(v[i] == 1){
                v[i] = 0;
                break;
            }
        }
        ans = max(ans,result(v,n));
        cout << ans << '\n';
    }

    return 0;
}//pass