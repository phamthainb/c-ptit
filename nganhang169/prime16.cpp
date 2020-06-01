//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
/*
   so co 3 uoc so la so chinh phuong va can bac 2 cua chung la mot so nguyen to
   vi du : 25 la so chinh phuong , can bac 2 cua 25 = 5 la so nguyen to
   cach 1 : kiem tra so chinh phuong va so nguyen to
   cach 2 : sang nguyen to
*/
const int N = 1e6 + 5; 
int isPrime[N];
void sieve(){ // sang nguyen to
    for(int i = 0 ;  i < N ; i++) isPrime[i] = 0; // khoi tao cac phan tu ban dau bang 0
    isPrime[0] = isPrime[1] = 1;
    for(int i = 2 ; i <= sqrt(N) ; i++){
        if ( isPrime[i] == 0 ){ // neu i chua duoc danh dau la 1
            for(int j = i * i ; j < N ; j += i)
                isPrime[j] = 1; // danh dau tat cac cac boi cua i < 10^6 la 1
        }
    }
    // cac so nguyen to duoc danh dau la 0.
}
long long n;
void input(){
    cin >> n ;
}
void solve(){
    int res = 0; 
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if ( isPrime[i] == 0)
            res++;
    }
    cout << res << endl;
}
int main(){
    sieve(); // sang nguyen to
    int t=1; 
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 