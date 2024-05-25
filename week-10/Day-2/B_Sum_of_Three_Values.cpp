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
    int n = 0, x = 0;
    cin >> n >> x;
    int input = 0, idx = 0;
    vector<int> array(n);
    while (cin >> input)
        array[idx++] = input;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({array[i], i + 1});
    sort(v.begin(), v.end());

    for (int li = 0; li < n; li++)
    {
        int ln = v[li].first;

        int front = li + 1, rear = n - 1, sum = 0;

        while (front < rear)
        {
            sum = ln + v[front].first + v[rear].first;
            if (sum == x)
            {
                cout << v[li].second << " " << v[front].second << " " << v[rear].second;
                return;
            }
            else if (sum < x)
                front++;
            else
                rear--;
        }
    }
    cout << "IMPOSSIBLE";
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


