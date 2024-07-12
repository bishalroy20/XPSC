/*
    author : BishalRoy20
*/
#include<bits/stdc++.h>
#define int long long int
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;


bool isVowel(char a)
{
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    return false;
}
void solve()
{
    string a,b;
    cin >> a >> b;
    if(a.size() != b.size()){
        cno;
    }
    else{
        int f = 1;
        for(int i=0;i<a.size();i++){
            if(isVowel(a[i]) && isVowel(b[i]) || !isVowel(a[i]) && !isVowel(b[i])){
                continue;
            }
            f = 0;
            break;
        }
        if(!f) cno;
        else cyes;
    }
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
}//pass


