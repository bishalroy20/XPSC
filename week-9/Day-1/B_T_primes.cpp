#include <bits/stdc++.h>
using namespace std;
 
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int main() {
    fastread();
    int t;
    cin >> t;
    ll n;
    ll sq;

    vector<int> prime(1000000+1,true);
    for(ll i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(ll j=i+i;j<=1000000;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=0;i<t;i++){
        cin >> n;
        
        sq = sqrt(n);
        if(n == 1){
            no;
        }
        else if(prime[sq] && sq*sq == n){
            yes;
        }
        else{
            no;
        }
    }
    
    return 0;
}//pass