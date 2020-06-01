//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    day con tang dai nhat.
    https://vietcodes.github.io/algo/lis
*/
const int maxN = 1e3+5;
int n,a[maxN] , f[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){   
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        f[i] = 0;
        for(int j = 0 ; j < i ; j++){
            if ( a[i] > a[j])
                f[i] = max(f[i],f[j]);
        }
        f[i]++;
        res = max(res,f[i]);
    }
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
 