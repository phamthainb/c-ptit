#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
int a[1011][1011];
int b[1011][1011] = {0};
int r , c;
void input(){
    memset(b,0,sizeof b);
    cin >> r >> c;
    for ( int i = 0 ; i < r ; i++){
        for ( int j = 0 ; j < c ; j++){
            cin >> a[i][j];
        }
    }
}
 
void solve(){
    for ( int i = 0 ; i < r ; i++){
        int flag = 0;
        for ( int j = 0 ; j < c ; j++){
            if ( a[i][j] == 1 ){
                flag = 1;
                break;
            }
        }
        if ( flag == 1) 
        for ( int j = 0 ; j < c ; j++)
            b[i][j] = 1;
    }
    for ( int i = 0 ; i < c ; i++){
        int flag = 0;
        for ( int j = 0 ; j < r ; j++){
            if ( a[j][i] == 1){
                flag = 1;
                break;
            }
        }
        if ( flag == 1) 
        for ( int j = 0 ; j < r ; j++)
            b[j][i] = 1;
        }

    for ( int i = 0 ; i < r ; i ++){
        for ( int j = 0 ; j < c ; j++){
            cout <<  b[i][j] << ' ';
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
 