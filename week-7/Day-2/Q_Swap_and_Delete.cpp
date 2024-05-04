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
        string s;
        cin >> s;

        int z=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                z++;
            }
            else{
                o++;
            }
        }

        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                if(o){
                    o--;
                }
                else{
                    break;
                }
            }
            else{
                if(z){
                    z--;
                } 
                else{
                    break;
                } 
            }  
        }
        cout << o+z << '\n';
    }
    return 0;
}