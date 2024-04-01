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

        // vector<vector<int>> v;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin >> a[i][j];
            }
        }
        
        int x,y;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i][0]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[a[i][0]] == 1){
                x = i;
                break;
            }
        }
        
        if(x == n-1){
            cout << a[x-1][0] << " ";
            for(int i=0;i<n-1;i++){
                cout << a[x][i] << " ";
            }
        }
        else{
            cout << a[x+1][0] << " ";
            for(int i=0;i<n-1;i++){
                cout << a[x][i] << " ";
            }
        }
        cout << '\n';
        
    }
    return 0;
}//pass