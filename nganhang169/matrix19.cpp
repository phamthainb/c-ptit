//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    cac o co cung duong cheo se co i+j = nhau.
*/
int n,m;
int a[105][105];
int sum[105][105] = {0};
void input(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
            sum[i][j] = i+j;
        }
    }
}
void solve(){
    for(int i = 2 ; i <= n + m ; i ++){
        if ( i % 2 == 1){
            for(int j = 1 ; j <= m ; j++){
                for(int k = 1  ; k <= n ; k++){
                    if ( sum[j][k] == i ){
                        cout << a[j][k] << ' ';
                        break;
                    }
                }
            }
        }
        else {
            for(int j = m ; j >= 1 ; j--){
                for(int k = 1  ; k <= n ; k++){
                    if ( sum[j][k] == i ){
                        cout << a[j][k] << ' ';
                        break;
                    }
                }
            }
        }
    }
    cout << endl;
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
 