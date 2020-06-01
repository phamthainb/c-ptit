    //Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    dp[i] = max{dp[j] , a[i]} ( 0 <= j < i )
*/
const int maxN = 1e7+5;
long long n,k,a[maxN], dp[maxN];
void input(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){   
    dp[0] = a[0];
    for(int i = 1 ; i < n ; i ++)
        dp[i] = max(a[i],dp[i-1]);
    for(int i = 0 ; i < n - k  ; i++)
        cout << dp[i+k] << ' ';
    cout << endl;
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
 