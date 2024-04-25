/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s; cin >> s;
        string t;
        // reverse(s.begin(),s.end());
        for(int i= n-1;i>=0;i--){
            if(s[i] == '0'){
                string a = s.substr(i-2,2);
                char c = 97 + stoi(a)- 1;
                // cout << c;
                t.push_back(c);
                i -= 2;
            }
            else{
                // cout << char(s[i]);
                char c = 'a' + int(s[i]) - '1';
                t.push_back(c);
            }
        }
        // cout << t << '\n';
        reverse(t.begin(),t.end());
        for(char i : t){
            cout << i;
        }
        cout << '\n';

    }
    return 0;
}