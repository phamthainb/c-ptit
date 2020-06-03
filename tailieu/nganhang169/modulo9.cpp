//Code By PMD
#include<iostream>
using namespace std;
/*
    cach 1 : Quy hoach dong 
        cong thuc truy hoi : nCk = (n-1)Ck + (n-1)C(k-1);
    cach 2 : nghich dao modulo  https://vnoi.info/wiki/algo/math/modular-inverse
*/
const int mod = 1e9 + 7;
int n,r;
long long C[1005][1005];
void c1(){
    for(int i = 1; i <= 1000 ; i++) C[i][i] = C[0][i] = 1;
    for(int i = 2;i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            C[j][i] = (C[j][i-1] + C[j-1][i-1])%mod;
        }
    }
}
void input(){
    cin >> n >> r;
}
void solve(){
    cout << C[r][n] << endl;
}
int main(){
    int t=1; 
    c1();
    cin>>t;
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 