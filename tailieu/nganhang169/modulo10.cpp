//Code By PMD
#include<iostream>
using namespace std;
/*
   duyet trau
*/
const int mod = 1e9 + 7;
int n,x;
int a[3000];
long long res;
void input(){
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}
void solve(){
    res = a[n-1];
    long long k = x;
    for(int i = n - 2 ; i >= 0 ; i--){
        res = (res + a[i] * k) % mod;
        k = (k * x) % mod;
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
 