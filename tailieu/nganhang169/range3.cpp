//Code By PMD
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*
    sang nguyen to hoac duyet trau.
*/
const int maxN = 1e4+5;
int l,r;
bool isprime(int n){
    if ( n < 2 ) return false;
    for(int i = 2 ; i <= sqrt(n) ; i++)
        if ( n % i == 0) return false;
    return true;
}
void input(){
    cin >> l >> r;
}
void solve(){
    int res = 0;
    for(int i = l ; i <= r ; i++){
        if( isprime(i) ) res ++;
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
 