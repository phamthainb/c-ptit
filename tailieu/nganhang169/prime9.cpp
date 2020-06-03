//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
/*
   phan tich ra thua so nguyen to.
*/
long long n;
void input(){
    cin >> n ;
}
void solve(){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            int dem = 0;
            while(n % i == 0){
                n /= i;
                dem ++;
            }
            cout << i << ' ' << dem << ' ';
        }
    }
    if ( n > 1 ) cout << n << ' ' << 1 ;
    cout << endl;
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
 