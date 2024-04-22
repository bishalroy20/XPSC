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
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        
        if(s%n <= b && ((a*n)+b) >= s){
            yes
        }
        else{
            no
        }
    }
    return 0;
}//pass