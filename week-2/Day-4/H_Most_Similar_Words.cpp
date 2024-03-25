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
        int n,c; cin >> n >> c;
        string s[n];
        // vector<int> v(n);
        int ans= INT_MAX;
        int dis,sum;
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum = 0;
                for(int k=0;k<c;k++){
                    dis = abs(s[i][k] - s[j][k]);
                    sum += dis;
                }
                ans = min(ans,sum);
            }
           
        }
        
        cout << ans << '\n';
    }
    return 0;
}//pass
