//Code By PMD
#include<iostream>
using namespace std;
/*
*/
int n,m;
int a[105][105];
void input(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    int l = 1 , r = m  , top = 1 , bot = n;
    while(l <= r && top <= bot){
        for(int i = l ; i <= r ; i++)   cout << a[top][i] << ' ';
        top++;
        if ( top > bot ) break;
        for(int i = top; i <= bot ; i++) cout << a[i][r] << ' ';
        r--;
        if(l > r) break;
        for(int i = r ; i >= l ; i--)    cout << a[bot][i] << ' ';
        bot--;
        if ( top > bot ) break;
        for(int i = bot ; i >= top ; i--) cout << a[i][l] << ' ';
        l++;
        if(l > r) break;
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
 