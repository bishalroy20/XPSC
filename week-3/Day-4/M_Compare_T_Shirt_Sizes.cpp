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

    int test; cin >> test;
    while(test--){
        string a,b;
        cin >> a >> b;

        char x = a.back();
        char y = b.back();
        if(x == y){
            if(a.size() == b.size()){
                cout << "=" << '\n';
            }
            else if(a[a.size()-1] == 'S'){
                if(a.size() < b.size()){
                    cout << ">" << '\n';
                }
                else{
                    cout << "<" << '\n';
                }
            }
            else if(a.size() > b.size()){
                cout << ">" << '\n';
            }
            else{
                cout << "<" << '\n';
            }
        }
        else{
            if(x < y){
                cout << ">" << '\n';
            }
            else{
                cout << "<" << '\n';
            }
        }
    }
return 0;
}//pass