#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n-1;i++){
        cin >> v[i];
    }
    int flag = 0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if((v[i+1]-v[i]) > 1){
            flag = 1;
            cout << v[i]+1 << '\n';
            break;
        }
    }
    if(!flag){
        cout << n << '\n';
    }
    return 0;
}