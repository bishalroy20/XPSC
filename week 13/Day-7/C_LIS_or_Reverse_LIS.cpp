#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,x;  cin>>n;

    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    int cnt1=0;
    int cnt2=0;
    for(auto it:mp)
    {
        if(it.second > 1)
        {
            cnt1++;
            cnt2++;
        }
        else
        {
            if(cnt1>cnt2)cnt2++;
            else cnt1++;
        }
    }
    cnt2++;
    cout<<min(cnt1,cnt2)<<endl;
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


