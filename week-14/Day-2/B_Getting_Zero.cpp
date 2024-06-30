#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

vector<int>ans(32770);
 
void pre_cal(){
    ans[0]=0;
    for(int i = 1;i<=32768;i++){
        int ans0=32768-i;
        int n=i;
        int cnt=0;
        while(n!=0){
            n=(2*n)%32768;
            cnt++;
        }
        ans[i]=min(ans0,cnt);
        for(int j =max(0,i-16);j<=i-1;j++){
            ans[j]=min(ans[j],ans[i]+(i-j));
        }
    }
}
 
int32_t main()
{
    fastread();

    pre_cal();
    
    int t;      cin >> t;
    while(t--){
        int n;   cin >> n;
        cout << ans[n] << ' ';
    }
}
