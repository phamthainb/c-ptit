//Code By PMD
#include<iostream>
using namespace std;
/*
 dung mang dem + mang danh dau
*/
const int maxN = 1e5;
int n;
int a[105][105];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    int cnt[maxN] = {0};  // luu so lan xuat hien cua i trong n hang
    for(int i = 0 ; i < n ; i++){
        int b[maxN] ={0}; // mang danh dau
        for(int j = 0 ; j < n ; j++){
            if( b[a[i][j]] == 0 ){ // neu a[i][j] chua xuat hien
                b[a[i][j]] = 1;    // a[i][j] da xuat hien
                cnt[a[i][j]]++;    
            }
        }
    }
    int res = 0;
    for(int i = 0 ; i <= 1e5 ; i++){
        if(cnt[i] == n) res ++;
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
 