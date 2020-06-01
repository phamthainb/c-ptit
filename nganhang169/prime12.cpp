//Code By PMD
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
/*
   phan tich ra thua so nguyen to.
   tao mot mang res luu thua so nguyen to
*/
const int N = 1e5+1;
vector < int > res;
long long n,k;
void input(){
    cin >> n  >> k;
}
void solve(){
    int u = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        while(n % i == 0){
            n /= i;
            res.push_back(i);
        }
    }
    if ( n > 1 ) res.push_back(n);
    if ( k > res.size() ) cout << -1 << endl;
    else cout << res[k-1] << endl;
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
 
