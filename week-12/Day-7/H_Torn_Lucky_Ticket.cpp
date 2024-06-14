/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
bool comp(string a, string b){
    return a.size() < b.size();
}
void solve()
{
    ll n; cin >> n;
    vector<string> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end(), comp);

    map<pair<ll , ll>,ll > mp;
    ll ans = n;
 
	for(auto s : v) {
		ll n = s.size();
		for(ll m = 1; m <= n; m++) {
			if((n + m) % 2 != 0) continue;
			ll mid = (m + n) / 2;
			ll req = 0;
			for(ll i = 0; i < mid; i++) req += (s[i] - '0');
			for(ll i = mid; i < n; i++) req -= (s[i] - '0');
 
			if(req >= 0) ans += mp[{m, req}];
		}
 
		reverse(s.begin(), s.end());
		for(ll m = 1; m <= n; m++) {
			if((n + m) % 2 != 0) continue;
			ll mid = (m + n) / 2;
			ll req = 0;
			for(ll i = 0; i < mid; i++) req += (s[i] - '0');
			for(ll i = mid; i < n; i++) req -= (s[i] - '0');
 
			if(req >= 0) ans += mp[{m, req}];
		}
 
		ll sum = 0;
		for(ll i = 0; i < n; i++) sum += (s[i] - '0');
		mp[{n, sum}]++;
	}
 
	cout << ans << '\n';

}

int32_t main()
{
    fastread();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}


