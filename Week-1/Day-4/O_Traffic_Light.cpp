#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		char c;
		string s;
		cin >> n >> c >> s;
		s = s + s;
		int cnt = 0, mx = 0, flag = 0;
		for (int i = 0; i < s.length(); i++) {
			if(s[i] == c){
                flag = 1;
            }
			if(s[i] == 'g'){
                flag = 0;
                mx = max(mx, cnt);
                cnt = 0;
            }
			if(flag){
                cnt++;
            }
		}
		cout << mx << endl;
	}
}
