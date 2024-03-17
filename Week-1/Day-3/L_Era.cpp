#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+1);
        
        int ans =0;
        for(int i=1;i<=n;i++){
            cin >> v[i];
            int a = ans +i;
            if(a < v[i]){
                ans += (v[i] - a);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}