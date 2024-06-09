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
    vector<int> v(n),a(n),b(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        b[i] = a[i] - v[i];
    }

    sort(b.begin(),b.end());
    int j = n-1, i =0,cnt =0;
    while(i < j){
        int sum = b[i]+b[j];
        if(sum >= 0){
            cnt++;
            j--;
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
}


