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

    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string s; cin >> s;
        stack<char> st;
        int x=0,total = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                x++;
            }
            else{
                x--;
            }
            if(x <0){
                total++;
                x = 0;
            }
        }
        cout << total << '\n';
    }
    return 0;
}