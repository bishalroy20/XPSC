#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,i=0;
    cin >> a >> b >> c;
    bool flag = false;
    int ans = 0;
    while(ans <= b){
        ans = c*i;
        if(ans >= a && b >= ans){
            flag = true;
            cout << ans << '\n';
            return 0;
        }
        i++;
    }
    if(!flag){
        cout << "-1" << '\n';
    }
    
    return 0;
}