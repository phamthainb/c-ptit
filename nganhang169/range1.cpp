//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
   mang cong don dp[i] = dp[i-1] + a[i];
   tong tu l --> r = ( tong(0 --> r ) - tong(0 --> l-1))
   res = dp[r] - dp[l-1];
*/
const int maxN = 1e4+5;
int n,q,a[maxN],dp[maxN];
void input(){

}
void solve(){
    cin >> n >> q ;
    dp[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        dp[i] = dp[i-1] + a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        l++ , r++;
        cout << dp[r] - dp[l-1] << endl; 
    }
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 