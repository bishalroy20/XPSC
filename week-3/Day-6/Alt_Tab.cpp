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
    map<string ,int> mp;
    list<string> l;
    vector<string> v(t);
    for(int i=0;i<t;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<t;i++){
        string c = v[i];
        mp[c]++;
        if(mp[c] == 1){
            l.push_front(c);
        }
    }
    
    string ns;
    for(string i : l){
        char a = i.back();
        ns.push_back(a);
        i.pop_back();
        char b = i.back();
        ns.push_back(b);
    }
    reverse(ns.begin(),ns.end());
    cout << ns;

    
    
    return 0;
}//pass