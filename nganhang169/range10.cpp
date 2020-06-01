//Code By PMD
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*
*/
const int maxN = 1e6+5;
int a[maxN],dp[maxN];
int n;
void input(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        dp[i] = 0;
    }
}
void solve(){
    int l = 1 , r = n ;
    dp[0] = dp[n+1] = 0;
    while( l <= r ){
        //cout << dp[l-1] << ' ' << dp[r+1] << endl;
        if ( dp[l-1] <= dp[r+1] ){
            dp[l] = dp[l-1] + a[l];
            l++;
        }
        else{
            dp[r] = dp[r+1] + a[r];
            r--;
        }
    }
    l = 1 , r = n;
    int res = 0;
    while( l < r ){
        if ( dp[l] == dp[r] ){
            l++ , r--;
            continue;
        }
        if ( dp[l] < dp[r] ) l++;
        else r--;
        res++;
    }
    cout << res << endl;

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
 