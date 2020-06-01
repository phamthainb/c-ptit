//Code By PMD
#include<iostream>
#include<vector>
using namespace std;
/*
*/
int n,m;
int a[105][105];
vector < int > res;
void input(){
    cin >> n >> m;
    res.clear();
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    int l = 1 , r = m  , top = 1 , bot = n;
    while(l <= r && top <= bot){
        for(int i = l ; i <= r ; i++)  res.push_back(a[top][i]);
        top++;
        if ( top > bot ) break;
        for(int i = top; i <= bot ; i++) res.push_back(a[i][r]);
        r--;
        if(l > r) break;
        for(int i = r ; i >= l ; i--)    res.push_back(a[bot][i]);
        bot--;
        if ( top > bot ) break;
        for(int i = bot ; i >= top ; i--) res.push_back(a[i][l]);
        l++;
        if(l > r) break;
    }
    for(int i = res.size() - 1 ; i >= 0 ; i --){
        cout << res[i] << ' ';
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
 