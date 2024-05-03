/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>111
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
        string s; cin >> s;
        if(s.size() < 2){
            cout << "Ramos" << '\n';
            continue;
        }
        // string ans;
        int cnt_z = 0,cnt_o = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                cnt_z++;
            }
            else{
                cnt_o++;
            }
        }
        int mn = min(cnt_z,cnt_o);
        if(mn%2 == 0){
            cout << "Ramos" << '\n';
        }
        else{
            cout << "Zlatan" << '\n';
        }
    }
    return 0;
}//pass