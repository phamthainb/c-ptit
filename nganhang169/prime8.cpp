//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    https://www.geeksforgeeks.org/legendres-formula-highest-power-of-prime-number-that-divides-n/
*/
long long n,p;
void input(){
    cin >> n >> p;
}
void solve(){
    long long ans = 0 , res = 1;
    while(res <= n/p){
        res *= p;
        ans += n/res;
    }
    cout << ans << endl;
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
 