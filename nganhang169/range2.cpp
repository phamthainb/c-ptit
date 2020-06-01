//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
*/
const int maxN = 1e4+5;
int n,q,a[maxN];
void input(){

}
void solve(){
    cin >> n >> q ;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        int i = l ;
        while(a[i] < a[i+1] && i + 1 <= r) i++;
        while(a[i] > a[i+1] && i + 1 <= r) i++;
        if( i == r) cout << "Yes" <<endl;
        else cout << "No" << endl;
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
 