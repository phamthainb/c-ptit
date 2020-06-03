//Code By PMD
#include<iostream>
using namespace std;
/*
    duyet trau
*/
long long n,k;
void input(){
    cin >> n >> k;
}
void solve(){
    long long res = 0;
    for(int i = 1;  i <= n ; i++)
        res += i%k;
    if ( res == k ) cout << 1 << endl;
    else  cout << 0 << endl;
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
 