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
        string s; cin >> s;

        stack<int> stl,stu;
        // vector<int> v;
        for(int i=0;i<s.size();i++){
            
            if(isupper(s[i]) && s[i] != 'B'){
                stu.push(i);
            }
            if(islower(s[i]) && s[i] != 'b'){
                stl.push(i);
            }
            if(s[i] == 'B' && !stu.empty()){

                    s[stu.top()] = '1';
                    stu.pop();
            }
            if(s[i] == 'b' && !stl.empty()){
                    s[stl.top()] = '1';
                    stl.pop();
            }  
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i] != 'b' && s[i] != 'B' && s[i] != '1'){
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}//pass
