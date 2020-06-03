//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    quy hoach dong 
    dp[i] = a[i] + max(dp[i-2] , dp[i-3]); voi i >= 3.
    res = max{dp[i]} ( 0 <= i < n );
*/
const int maxN = 1e5+5;
long long n,a[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){
    if ( n == 1 )
        cout << a[0] << endl;
    else if ( n == 2 )
        cout << max(a[0],a[1]) << endl;
    else{
        long long dp[n+5];
        dp[0] = a[0] ;
        dp[1] = a[1] ;
        dp[2] = a[0] + a[2];
        for(int i = 3 ; i < n ; i++)
            dp[i] = a[i] + max(dp[i-2],dp[i-3]);
        long long res = 0;
        for(int i = 0 ; i < n ; i++)
            res = max(dp[i],res);
        cout << res << endl;
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
 