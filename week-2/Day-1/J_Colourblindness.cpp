#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        string a,b;
        cin >> a >> b;
        for(int i=0; i<n;i++){
            if(a[i] == b[i]){
                count++;
            }
            else if(a[i]=='G' && b[i]=='B'){
                count++;
            }
            else if(a[i]=='B' && b[i]=='G'){
                count++;
            }
        }
        if(count==n){
            cout << "YES" << endl;
            }
        else{
            cout << "NO" << endl;
        }
    }
}