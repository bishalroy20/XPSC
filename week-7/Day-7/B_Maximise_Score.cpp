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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int mn = INT_MAX;
        for(int i=1;i<n-1;i++){
            mn = min(mn, max(abs(v[i] - v[i-1]), abs(v[i] - v[i+1])));
        }
        mn = min(mn, abs(v[1] - v[0]));
	    mn = min(mn, abs(v[n-1] - v[n-2]));
	    cout << mn << endl;
    }
    return 0;
}//pass