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
        vector<ll> v(n);

        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        // vector<ll> v1(n);
        // stack<ll> st;
        priority_queue<ll> pq;
        ll ans = 0;
        for(int i=0;i<n;i++){
            
            if(v[i] > 0){
                pq.push(v[i]);
                
            }
            else{
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                
                }
                
            }
        }
        cout << ans << '\n';
    }
    return 0;
}//pass


