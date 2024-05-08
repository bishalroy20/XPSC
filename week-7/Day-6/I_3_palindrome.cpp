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
    string s = "bbaa";
    int j = 0;
    // for(int i=0;i<n;i++){
    //     s[i+2] = s[i];
    // }
    for(int i=0;i<n;i++){
        cout << s[j];
        j++;
        if(j == 4){
            j=0;
        }
    }
    
    return 0;
}//pass