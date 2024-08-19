#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,a,c; cin >> x;
        string s;
        cin >> s;

        for(int i=0;i<x;i++){
            if(s[i] == 'B'){
                a = i;
                break;
            }
        }
        for(int i=x-1;i>=0;i--){
            if(s[i] == 'B'){
                c = i;
                break;
        }}
        cout << c-a+1 << endl;
    }
    return 0;
}
