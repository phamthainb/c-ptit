//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
/*
    do gioi han be nen co the duyet trau
*/
int  m,n,a,b;
void input(){
    cin >> m >> n >> a >> b;
}
void solve(){
    int cnt = 0;
    for( int i = m ; i <= n ; i++){
        if ( i % a == 0 || i % b == 0)      // chia het cho a hoac b 
            cnt ++;
    }
    cout << cnt << endl;
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
 