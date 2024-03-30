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
        string str; cin >> str;
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
        list<char> s;
        for(int i=0;i<n;i++){
            s.push_back(str[i]);
        }

        s.unique();
        string a = "";
        for(char i : s){
            a += i;
        }
        // cout << a;

        if(a == "meow"){
            yes
        }
        else{
            no
        }
        
        
    }
    return 0;
}//pass