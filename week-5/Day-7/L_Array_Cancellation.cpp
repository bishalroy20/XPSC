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
        int n;
        cin >> n;
        vector<int> v(n);
        ll sump = 0,sumn=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        for(int i=0;i<n;i++){
            if(v[i] < 0){
                if(sump > 0){
                    if(sump + v[i] < 0){
                        v[i] += sump;
                        sump = 0;
                        sumn += v[i];
                    }
                    else{
                        sump += v[i];
                    }
                    }
                else{
                    sumn += v[i];
                }   
            }
            if(v[i] > 0){
                sump += v[i];
            }
        }
        
        // for(int i : v){
        //     cout << i << " ";
        // }
        cout << sump << '\n';

        
    }
    return 0;
}