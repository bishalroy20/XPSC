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
        int a,b;
        cin >> a >> b;
        int x = a&b;
        cout << ((a^x)+(b^x)) << '\n';
    }
    return 0;
}