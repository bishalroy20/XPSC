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

bool count(string a,char c){
    for(int i=0;i<a.size();i++){
        if(a[i] == c){
            return true;
        }
    }
    return false;
}
void solve()
{
    string a,b;
    cin >> a >> b;

    if(a == b){
        cout << "YES\n";
        cout << a << '\n';
    }
    else{
        string s = "";
        // char c,d;
        for(int i=0;i<a.size()-1;i++){
            for(int j=0;j<b.size()-1;j++){
                if(a[i] == b[j] and a[i+1] == b[j+1]){
                    s += a[i];
                    s += a[i+1];
                    break;
                }
            }
            if(s.size()){
                break;
            }
        }

        if(s != ""){
            cout << "YES\n";
            cout << "*" << s << "*\n";
        }
        else{
            if(a[0] == b[0]){
                cout << "YES\n";
                cout << a[0] << "*\n";
            }
            else if(a[a.size()-1] == b[b.size()-1]){
                cout << "YES\n";
                cout << "*" << a[a.size()-1] << "\n";
            }
            else{
                cout << "NO\n";
            }
        }
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


