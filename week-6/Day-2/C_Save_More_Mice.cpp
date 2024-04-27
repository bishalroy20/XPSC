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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(k);
        // set<int> s;
        for(int i=0;i<k;i++){
            cin >> v[i];
            // s.insert(v[i]);
        }

        // reverse(s.begin(),s.end());
        sort(v.begin(),v.end(),greater<int>());
        int cat=0,total = 0;
        for(int i=0;i<k;i++){
            if(cat < v[i]){
                cat += (n-v[i]);
                total++;

            }
            else{
                break;
            }
        }
        cout << total << '\n';
    }
    return 0;
}//pass