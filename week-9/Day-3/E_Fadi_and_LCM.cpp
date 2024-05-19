#include<bits/stdc++.h>
#define int long long int
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
  
int32_t main(){
    fastread();
    int x;
    cin >> x;
    int ans;
    for(int i = 1;i*i<=x;i++){
        if(x%i == 0 && lcm(i,x/i) == x){
            ans = i;
        }
    }
    cout << ans << " " << x / ans << endl;
}



