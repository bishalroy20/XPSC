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

    string s,t;
    cin >> s >> t;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] != t[i]){
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}