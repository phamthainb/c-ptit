//Code By PMD
#include <iostream>
using namespace std;
/*
    tao mot mang luu 92 so fibonacci < 1e18;
    duyet kiem tra xem n co thuoc mang do hay khong
*/
const int nmax = 93;
long long f[nmax];
void fibo(){
    f[0] = 0; f[1] = 1;
    for(int i = 2 ; i < 93 ; i++)
        f[i] = f[i-1] + f[i-2];
}
long long n;
void input(){
    cin >> n;
}
void solve(){  
    int ok = 0; 
    for(int i = 0 ; i < 93 ; i++){
        if ( n == f[i] ){
            ok = 1;
            break;
        }
    }
    if ( ok == 1 ) cout << "YES" << endl;
    else cout << "NO" << endl;
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
 