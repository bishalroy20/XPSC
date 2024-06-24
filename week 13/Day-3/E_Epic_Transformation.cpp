#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;


int32_t main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<int,int> mp;
        vector<int> v(n);

        int mx = 0;
        for(auto &x:v){
            cin >> x;
            mp[x]++;
            mx = max(mp[x],mx);
        } 

        int a = n-mx;
        if(a >= mx){
            cout << (n%2) << '\n';
        }
        else{
            cout << mx-a << '\n';
        }
    
    }

    return 0;
}


