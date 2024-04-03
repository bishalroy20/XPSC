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
        int n,q;
        cin >> n >> q;

        vector<int> v(n);
        map<int , pair<int,int>> mp;
        for(ll i=0;i<n;i++){
            int val; cin >> val;
            if(!mp.count(val)){
                mp[val].first = i;
                mp[val].second = i;
            }
            else{
                mp[val].second = i;
            }
        }

        for(int i=0;i<q;i++){
            int a,b;
            cin >> a >> b;
            
            if(!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second){
                no
            }
            else{
                yes
            }
        }
    }
    return 0;
}//pass

