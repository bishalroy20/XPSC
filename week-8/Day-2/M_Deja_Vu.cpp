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
        int n,q;
        cin >> n >> q;

        vector<int> a(n),b(q);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<q;i++){
            cin >> b[i];
        }
        vector<int> arr;
        for(auto i: b){
            if(arr.size() == 0 || arr.back() > i){
                arr.push_back(i);
            }
        }

        for(auto i: arr){
            int x = pow(2,i);
            int v = pow(2,i-1);
            for(auto &j: a){
                if(j%x == 0){ 
                    j += v;
                }
            }
        }
        for(auto i: a){
            cout << i << " ";
        } 
        cout << '\n';
        }
    return 0;
}