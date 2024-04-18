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
        int n,k; cin >> n >> k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            if((x&k)==k){
                v.push_back(x);
            }
        }

        if(v.size() == 0){
            no
        }
        else{
            int x = v[0];
            for(int i=1;i<v.size();i++){
                x = (x&v[i]);
            }
            if(x == k)
                yes
            else{
                no
            }
            
    }}
    return 0;
}//pass