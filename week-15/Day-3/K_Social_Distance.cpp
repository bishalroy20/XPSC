/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    // for(int i=0;i<n;i++){
    //     if(s[i] == '1'){
    //         cnt++;
    //     }
    // }
    int p = 0;
    if(s[0] == '0'){
        cnt++; p = 0;
    }
    int i = 1;
    while(i < n){
        if(s[i] == '1'){
            if(i-p-k <= 0){
                cnt--;
                
            }
            p = i;
        }
        else{
            if(i-p-k > 0){
                cnt++;
                p = i;
            }
        }
        i++;
    }
    cout << cnt << '\n';
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}//pass


