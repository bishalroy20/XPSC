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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        ll sum=0,cnt=0;
        bool flag = false;
        for(int i=0;i<n;i++){
            
            sum += abs(v[i]);
            // if(v[i] == 0)  continue;
            if(v[i] < 0 && !flag){
                flag = true;
                cnt++;
            }
            else if(v[i] > 0){
                flag = false;
            }
        }

        cout << sum << " " << cnt << '\n';

    }
    return 0;
}//pass