/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

bool equals(vector<int> a, vector<int> b, int n){
    int dif = INT_MAX;
    for(int i=0;i<n;i++){
        if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }
    
    if(dif < 0) return false; 
    if(dif == INT_MAX) return true;
    for(int i=0;i<n;i++){
        if(a[i] - b[i] > dif) return false;
        if(b[i] != 0 && a[i] - b[i] < dif) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        
        
        if(equals(a,b,n) == true){
            yes
        }
        else{
            no
        }
    }
    return 0;
}


