/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,k;
    cin >> a >> b >> k;

    int cnt=0;
     
    while(1){
        if(b%k == 0 && b/k>=a) {
            b /= k;
            cnt++;
        } 
        else{
            if(b%k == 0) {
                cnt += (b - a);
                break;
            }
            else{
                cnt += b%k;
                b -= b%k;  
            }
        }
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
}



