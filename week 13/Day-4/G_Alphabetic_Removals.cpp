#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

int32_t main()
{
    fastread();
    int n,k; cin >> n >> k;

    string s; cin >> s;
    
    for(char i= 'a';i<= 'z';i++){
        if(k == 0) break;
        for(int j=0;j<s.size();j++){
            if(s[j] == (char)i){
                s[j] = -1;
                k--;
            }
        if(k == 0) break;
        }
    }

    for(char i : s){
        if(i != -1){
            cout << i;
        }
    }
    cout << '\n';
    return 0;
}


