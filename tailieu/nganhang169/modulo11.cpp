//Code By PMD
#include<iostream>
using namespace std;
/*
   de quy tinh a*b;
    vd tinh 2 * 10
    2 * 10 = 2 * 5 + 2 * 5;
    2 * 5 = 2 * 2 + 2 * 2 + 2;
    2 * 2 = 2 * 1 + 2 * 1;
    2 * 1 = 2;
*/
long long nhan(long long a , long long b , long long c){
    if ( b == 0 ) return 0;
    if ( b == 1 ) return a % c;
    long long tmp = nhan(a,b/2,c);
    if ( b % 2 == 1) return ( (tmp + tmp ) % c+ a )%c ;
    else return (tmp + tmp)%c;
}
long long a,b,c;
void input(){
    cin >> a >> b >> c;
}
void solve(){
    cout << nhan(a,b,c) << endl;
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
 