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

    int n; cin >> n;
    int ans;
    if(n%2==0){
        ans = n/2;
        cout << ans << '\n';
        for(int i=0;i<ans;i++){
            cout << 2 << " ";
        }
        cout << '\n';
    }
    else{
        ans = n/2;
        cout << ans << '\n';
        for(int i=0;i<ans-1;i++){
            cout << 2 << " ";
        }
        cout << 3 << '\n';
    }
    return 0;
}//pass