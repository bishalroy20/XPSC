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

    int n,m; cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<int> v(n+m);
    int j=0;
    for(int i=0;i<n;i++){
        v[i] = a[i];
        j++;
    }
    for(int i=0;i<m;i++){
        v[j] = b[i];
        j++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<j;i++){
        cout << v[i] << " ";
    }
    
    return 0;
}//pass