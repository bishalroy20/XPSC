/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

bool palindrome(vector<int> v){
    int i=0,j = v.size()-1;
    while(i < j){
        if(v[i] != v[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+3);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int ans = 1;
        int a,b;
        int i=0,j = n-1;
        while(i < j){
            if(v[i] != v[j]){
                ans = 0;
                a = v[i];
                b = v[j];
                break;
            }
            i++;
            j--;
        }

        if(ans == 1){
            yes
        }
        else{
            vector<int> v1,v2;
            for(int i=0;i<n;i++){
                if(a == v[i]) continue;
                v1.push_back(v[i]);
            }
            for(int i=0;i<n;i++){
                if(b == v[i]) continue;
                v2.push_back(v[i]);
            }

            bool ans1 = palindrome(v1);
            bool ans2 = palindrome(v2);
            if(ans1 || ans2) yes
            else no
        }
        
        }
    return 0;
}//pass

