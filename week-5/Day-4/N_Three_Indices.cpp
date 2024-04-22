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

        bool flag = false;
        int a,b,c;
        for(int i=1;i<n-1;i++){
            if(v[i] > v[i-1] && v[i] > v[i+1]){
                flag = true;
                a = i;
                b = i+1;
                c = i+2;
                break;
            }
        }
        if(flag){
            yes
            cout << a << " " << b << " " << c  << '\n';
        }
        else{
            no
        }
    }
    return 0;
}