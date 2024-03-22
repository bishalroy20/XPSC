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
        string s; cin >> s;
        
        string a = "Timur";
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        if(a == s){
            yes
        }
        else{
            no
        }
    }
    return 0;
}