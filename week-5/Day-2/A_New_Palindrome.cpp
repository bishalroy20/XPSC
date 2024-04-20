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

    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        int x = (s.size()/2);
        bool flag = false;
        for(int i=0;i<x-1;i++){
            if(s[i] != s[i+1]){
                flag = true;
            }
        }
        if(flag) yes
        else no

    }
    return 0;
}//pass