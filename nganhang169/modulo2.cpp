//Code By PMD
#include<iostream>
using namespace std;
/*
    duyet trau
*/
int a,m;
void input(){
    cin >> a >> m;
}
void solve(){
    int ok = 0;
    for(int i = 0 ; i <= 100 ; i++){
        if ( (i*a) % m == 1 ){
            ok = 1;
            cout << i << endl;
            break;
        }
    }
    if ( ok == 0 ) cout << -1 << endl;
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
 