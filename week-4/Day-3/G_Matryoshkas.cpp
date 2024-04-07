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
        map<int,int> mp;

        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int cnt=0;
        
        
        for (int i = 0; i <n ; i++) {
            int x = v[i];
            if(mp[x] != 0){
                cnt++;
                while(mp[x] > 0){
                    mp[x]--;
                    x += 1;
                }
            }
            
        }
        cout << cnt << '\n';
    }
    return 0;
}//pass