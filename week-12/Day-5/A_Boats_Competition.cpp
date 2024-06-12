/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
int pairs(vector<int> v,int n,int sum){
    int l=0 , r=n-1 ,cnt = 0;
    while(l < r){
        int s = v[l] + v[r];
        if(s == sum ){
            cnt++; l++; r--;
        }
        else if(s < sum){
            l++;
        }
        else{
            r--;
        }
    }
    return cnt;
}
void solve()
{
    int n; cin >> n;
    vector<int> v(n),a(101);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }   

    sort(v.begin(),v.end());

    for(int i=0;i<101;i++){
        a[i] = pairs(v,n,i);
    }
    int mx = 0;
    for(int i=0;i<101;i++){
        mx = max(a[i],mx);
    }

    // auto mx = max_element(a.begin(),a.end());
    cout << mx << '\n';
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


