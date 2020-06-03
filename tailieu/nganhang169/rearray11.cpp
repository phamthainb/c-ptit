//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100 + 5;
/*
    cai tien tu day con tang dai nhat 
    https://vietcodes.github.io/algo/lis
    f la da day con tang dai nhat tu trai sang phai,
    g la day con tang dai nhat tu phai qua trai.
    fi la day con tang dai nhat tu trai qua ket thuc o a[i];
    gi la day con tang dai nhat tu phai qua ket thuc o a[i];
    res = max(res,f[i] + g[i] - 1) ( 0 <= i < n ); 
*/
int a[N] , n ;
int f[N], g[N];
void input(){
    cin >> n;
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
}
void solve(){
    for(int i = 0 ; i < n ; i++){
        f[i] = 0;
        for(int j = 0 ; j < i ; j++){
            if ( a[j] < a[i])
                f[i] = max(f[i],f[j]);
        }
        f[i]++;
    }
    for(int i = n - 1; i >= 0 ; i--){
        g[i] = 0;
        for(int j = i ; j < n ; j ++){
            if ( a[j] < a[i] )
                g[i] = max(g[i],g[j]);
        }
        g[i]++;
    }
    int res = 0;
    for(int i = 0 ; i < n ; i++)
        res = max(res,f[i] + g[i] - 1);
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
 