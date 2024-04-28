/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
const int max_n = 1e4+9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v;
    for(int i=1;i<max_n;i++){
        v.push_back(pow(i,3));
    }

    int t; cin >> t;
    while(t--){
        ll x; cin >> x;
        // ll b=0;
        bool flag = false;
        for(int i=0;i<max_n;i++){
            if(v[i] >= x){
                break;
            }
            int l =0,r=max_n-1,mid;
            ll need = x - v[i];
            bool ok = false;
            while(l <= r){
                mid = (l+r)/2;
                if(v[mid] == need){
                    ok = true;
                    break;
                }
                else if(v[mid] > need){
                    r = mid -1;
                }
                else{
                    l = mid+1;
                }
            }
            if(ok){
                flag = true;
                break;
            } 
        }
        if(flag) yes
        else no
    }
    return 0;
}//pass