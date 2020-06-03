//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
long long n;
/*
    phan tich ra thua so nguyen to.
*/
void input(){
    cin >> n;
}
void solve(){
    int dem = 0; // dem xem co bao nhieu thua so nguyen to
    int check = 0; 
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0 ){
            dem++;
            int dem1 = 0; // dem xem thua so nguyen to lap lai bao nhieu lan
            while(n % i == 0){
                dem1++;
                n/=i;
            }
            if( dem1 > 1 ){
                check = 1;
                break;
            }
        }
    }
    if ( n > 1 ) dem ++;
    if ( dem == 3 && check == 0) cout << 1 << endl;
    else cout << 0 << endl;
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
 