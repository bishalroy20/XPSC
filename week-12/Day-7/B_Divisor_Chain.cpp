/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define pii pair<ll,ll>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin >> n;

    int x = log2(n) , val = 1;
    string s;
    while(x--){
        val *= 2;
    }

    int d = n - val;
    while(d){
        s += (d%2 + '0');
        d /= 2;
    }
    vector<int> v;
    v.push_back(n);

    for(int i=0;i<s.size();i++){
        if(s[i] == '1'){
            v.push_back(n-pow(2,i));
            n -= pow(2,i);
        }
    }
    while(n){
        n /= 2;
        if(n){
            v.push_back(n);
        }
    }
    cout << v.size() << '\n';
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
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


