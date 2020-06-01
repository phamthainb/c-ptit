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
 