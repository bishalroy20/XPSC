// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     ll a[n+1];
//     ll sum=0;
//     for(ll i=0;i<n;i++){
//         cin >> a[i];
//         sum += a[i];
//     }

//     if(sum%2 == 0){
//         cout << sum << '\n';
//         return 0;
//     }
//     else{
//         sort(a,a+n);
//         for(ll i=0;i<n;i++){
//             if((sum - a[i])%2 == 0){
//                 cout << sum - a[i] << '\n';
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum%2 ==0){
        cout << sum << '\n';
    }
    else{
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++){
            
            if((sum - v[i])%2 == 0){
                cout << sum - v[i] <<'\n';
                break;
            }
        }
    }
    return 0;
}