//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    ez.
*/
const int maxN = 1e5+5;
int n,k,a[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){
    int res = 0;
    for(int i = 0 ; i < n ; i++)
        res = max(res,a[i]);
    cout << res << endl;
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
 