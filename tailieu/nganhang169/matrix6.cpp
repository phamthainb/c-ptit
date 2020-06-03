//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
*/
int n;
int a[105][105];
void input(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if ( i == 1 || i == n || j == 1 || j == n)
                 cout << a[i][j] << ' ';
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
 