//Code By PMD
#include<iostream>
using namespace std;
/*
    cach 1 : duyet trau
    cach 2 : de quy tinh luy thua
    vi du : tinh 2^10 
    2^10 = 2^5 * 2^5;
    2^5 = 2^2 * 2^2 * 2;
    2^2 = 2^1 * 2^1;
    2^1 = 2; 
*/

long long modpow(long long x , long long y , long long p){
    if ( y == 1 ) return x % p;
    long long tmp = modpow(x,y/2,p);
    if ( y % 2 == 1) return (tmp * tmp  )% p * x % p;
    else return tmp * tmp % p; 
}
long long x,y,p;
void input(){
    cin >> x >> y >> p;
}
void solve(){
    cout << modpow(x,y,p) << endl;
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
 