//Code By PMD
#include <iostream>
using namespace std;
/*
    tao mot mang luu 92 so fibonacci < 1e18;
    duyet kiem tra xem a[i] co thuoc mang do hay khong
*/
const int nmax = 93;
long long f[nmax];
void fibo(){
    f[0] = 0; f[1] = 1;
    for(int i = 2 ; i < 93 ; i++)
        f[i] = f[i-1] + f[i-2];
}
bool check(int x){
    int ok = 0; 
    for(int i = 0 ; i < 93 ; i++){
        if ( x == f[i] )
            return 1;
    }
    return 0;
}
int a[101];
int n;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){  
    for(int i = 0 ; i < n ; i++){
        if ( check(a[i]) == 1) cout << a[i] << ' ';
    }
    cout << endl;
}
int main(){
    int t=1; 
    cin>>t; 
    fibo();
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 
