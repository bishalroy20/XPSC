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
        set<int> s;
        // list<int> l;
        for(int i=0;i<n;i++){
            int val; cin >> val;
            s.insert(val);
        }
        
        int x = s.size();
        if((n-x)%2 == 0)    cout << x << '\n';
        else cout << x-1 << '\n';
    }
    return 0;
}//pass