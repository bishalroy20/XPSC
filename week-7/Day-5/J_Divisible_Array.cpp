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
        int sum = (n*(n+1))/2;

        // for(int i=1;i<=n;i++){
        //     sum += i;
        // }

        int j=1;
        for(int i=1;i<=n;i++){
            
            if(sum%n==0){
                break;
            }
            else{
                sum += 1;
                j++;
            }
        }
        cout << j << " ";
        for(int i=2;i<=n;i++){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}//pass