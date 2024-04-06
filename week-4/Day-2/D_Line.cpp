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
        string s; cin >> s;
        vector<ll> v;
        ll sum = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'L'){
                ll a = i;
                ll b = s.size()-i-1;
                if(a < b) sum+=b;
                else sum+=a;
                if(a < b){
                    s[i] = 'R';
                    v.push_back(b-a);

                }
            }
            else{
                ll a = i;
                ll b = s.size()-i-1;
                if(a < b) sum+=b;
                else sum+=a;
                if(a > b){
                    s[i] = 'L';
                    v.push_back(a-b);
                }
            }
        }

        // cout << sum << '\n';
        ll sum2 = 0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i++){
            sum2 += v[i];
        }
        for(int i=0;i<v.size();i++){
            sum2 -= v[i];
            cout << sum-sum2 << " ";
        }
        for(int i=v.size();i<s.size();i++){
            cout << sum << " ";
        }
        cout << '\n';
    }
    return 0;
}//pass