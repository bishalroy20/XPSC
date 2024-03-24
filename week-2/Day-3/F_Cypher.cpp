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
        int n; cin >> n;
        vector<int> v(n);
        int c;
        string s;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            cin >> c >> s;
            for(int j=0;j<c;j++){
                if(v[i] == 9 && s[j] == 'D'){
                    v[i] = 0;
                }
                else if(v[i] == 0 && s[j] == 'U'){
                    v[i] = 9;
                }
                else if(s[j] == 'U'){
                    v[i] -= 1;
                }
                else if(s[j] == 'D'){
                    v[i] += 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}//pass