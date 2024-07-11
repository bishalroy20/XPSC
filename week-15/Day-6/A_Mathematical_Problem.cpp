/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    
    if(n == 2){
        
        cout << stoi(s) << '\n'; 
    }
    else if(n == 3){
        int n1 = (s[0] - '0')*10 + (s[1] - '0');
        int ans1 = min((s[2]-'0')*n1 , (s[2] - '0')+n1);

        int n2 = ((s[1] - '0')*10) + (s[2] - '0');
        int ans2 = min((s[0]-'0')*n2 , (s[0] - '0')+n2);
        cout << min(ans1 , ans2) << '\n';
    }
    else{
        int ans = 1e18;
        int f = 0;
        for(int i=0;i<n-1;i++){
            int num = (s[i] - '0')*10 + (s[i+1]-'0');
            for(int j=0;j<n;j++){
                if(j == i || j == i+1) continue;
                if(s[j] == '0') f = 1;
                if(s[j] == '1') continue;
                else num += (s[j] - '0');
                
            }
            ans = min(ans,num);
            if(f == 1){
                ans = 0; 
                break;
            } 
        }
        cout << ans << '\n';
    }
    
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
}


