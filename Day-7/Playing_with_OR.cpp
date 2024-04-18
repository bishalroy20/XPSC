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

    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;
        int l=0,r=k,ans=0;
        while(r <= n){
            bool flag = false;
            for(int i=l;i<r;i++){
                if(v[i]%2 != 0){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cnt++;
            }
            l++;
            r++;
        }
        cout << cnt << '\n';
    }
    return 0;
}//pass