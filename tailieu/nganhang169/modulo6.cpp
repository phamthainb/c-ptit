//Code By PMD
#include<iostream>
using namespace std;
/*
    chuyen tu string sang so ,
    de quy tinh luy thua
*/
long long modpow(long long x , long long y , long long p){
    if ( y == 1 ) return x % p;
    long long tmp = modpow(x,y/2,p);
    if ( y % 2 == 1) return (tmp * tmp  )% p * x % p;
    else return tmp * tmp % p; 
}
string a;
long long b,m;
void input(){
    cin >> a >> b >> m;
}
void solve(){
    long long res = 0;
    for(int i = 0 ;  i < a.length() ; i++)
        res = (res * 10 + (a[i] - '0') )%m;
    
    cout << modpow(res,b,m) << endl;
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
 