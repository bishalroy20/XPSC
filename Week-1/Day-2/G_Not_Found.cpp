#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    sort(s.begin(),s.end());
    int a[100005] = {0};
    bool flag = false;
    for(int i=0;i<s.size();i++)
    {
        int x = s[i] - 97;
        a[x] = s[i] - 97;
    }
    int j = 1;
    for(int i=0; i < 26; i++){
        if (s[0] == 'a' && j<26 && a[j] == 0){
            flag = true;
            char c = j + 97;
            cout << c << endl;
            return 0;
        }
        else if(s[0] != 'a'){
            flag = true;
            cout << 'a' << endl;
            return 0;
        }
        j++;
    }
    if(!flag) cout << "None" << '\n';
    return 0;
}


