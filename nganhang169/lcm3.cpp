//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int mod = 1e9+7;
/*
    dung` ham` tinh ucln : __gcd trong thu vien algorithm
    tinh g(x) la ucln cua a;
    h(x) la tich cac phan tu;
    tinh h(x)^g(x) : bang chia de tri hoac duyet trau .
*/
int n;
long long a[100];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}
void solve(){
    long long ucln = a[0];
    long long tich = 1;
    for(int i = 0 ; i < n ; i++){
        tich = (tich*a[i]) % mod;
        ucln = __gcd(a[i],ucln);
    }
    long long res = 1;
    for(int i = 0 ; i < ucln ; i++)
        res = (res*tich)%mod;
    cout << res << endl;
}
int main(){
   
    int t = 1; 
    cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 