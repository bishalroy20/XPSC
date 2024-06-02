/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    string a,b;
    int flag = 0;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        if((a[i] == '0' && b[i] == '0') && (a[i+1] == '1' && b[i+1] == '1')){
            flag = 1;
            break;
        }
    }
    if(flag) yes;
    else no;
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


