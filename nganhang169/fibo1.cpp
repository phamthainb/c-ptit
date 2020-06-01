//Code By PMD
#include <iostream>
using namespace std;
/*
    quy hoach dong 
    cong thuc truy hoi fi = f(i-1) + f(i-2) voi f0 = 0 , f1 = 1;

*/
const int nmax = 1001;
const int mod = 1e9 + 7;
long long f[nmax];
void fibo(){
    f[0] = 0; f[1] = 1;
    for(int i = 2 ; i <= nmax ; i++)
        f[i] = (f[i-1] + f[i-2])%mod;
}
int n;
void input(){
    cin >> n;
}
void solve(){   
    cout << f[n] << endl;
}
int main(){
    int t=1; 
    cin>>t; 
    fibo();
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 