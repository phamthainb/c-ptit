//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
/*
    https://vi.wikipedia.org/wiki/Số_hoàn_thiện
    cac so hoan thien tu 1e12 den 1e18 ko co so nao . 
    the nen chi can duyet tim cac so nho hon 1e12
*/
long long n;
void input(){
    cin >> n ;
}
void solve(){
    if ( n >= 1e12 || n % 2 == 1 )
        cout << 0 << endl;
    else{
        long long sum = 1;
        for(int i = 2 ; i < sqrt(n) ; i++){
            if ( n % i == 0){
                sum += i;
                sum += n/i;
            }
        }
        if ( (int)sqrt(n) == sqrt(n) ) sum += sqrt(n);
        if ( n  == sum ) cout << 1 << endl;
        else cout << 0 << endl;
    }
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
 