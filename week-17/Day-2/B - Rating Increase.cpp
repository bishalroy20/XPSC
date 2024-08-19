#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool f = false;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] != '0' && stoi(s.substr(0, i)) < stoi(s.substr(i))) {
                cout << s.substr(0, i) << " " << s.substr(i) << '\n';
                f = true;
                break;
            }
        }

        if (!f) {
            cout << -1 << '\n';
        }
    }

    return 0;
}
