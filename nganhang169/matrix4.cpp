//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    tim so mien lien thong bang bfs hoac dfs.
    loang 8 huong.
*/
typedef pair < int , int > pii;
int n,m;
int a[105][105];
int vis[105][105] = {0};
int dx[] = {-1,0,1,1,1,0,-1,-1};
int dy[] = {1,1,1,0,-1,-1,-1,0};
bool inside(int x , int y){
    return ( 0 <= x && x < n && 0 < y && y < m);
}
void BFS(int r , int c){
    queue < pii > q;
    q.push({r,c}); vis[r][c] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0 ; i < 8 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if ( inside(u,v) && !vis[u][v] && a[u][v]){
                q.push({u,v});
                vis[u][v] = 1;
            }
        }
    }

}
void input(){
    memset ( vis , 0 , sizeof vis);
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if ( a[i][j] && !vis[i][j] ){
                //cout << i << ' ' << j << endl;
                BFS(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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
 