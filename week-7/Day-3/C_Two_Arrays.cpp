/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

// bool same(vector<int> a, vector<int> b,int n){
//     for(int i=0;i<n;i++){
//         if(a[i] != b[i]){
//             return false;
//         }
//     }
//     return true;
// }
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

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int flag = 1;
        for(int i=0;i<n;i++){
            if(a[i] != b[i] && b[i] !=a[i]+ 1 ){
                flag = 0;
            }
        }
        if(flag) yes;
        else no;
        
    }
    return 0;
}//pass