#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef tuple < int , int , int > ti3;
/*
    tim quang duong ngan nhat bang bfs, bai nay hoi kho :v
*/
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0,};
int xd , yd , xc , yc;
int vis[1005][1005];
int a[1005][1005];
int n,m;
void input(){
	cin >> n >> m;
    cin >> xd >> yd >> xc >> yc;
	for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
}
bool inside(int x , int y){
	return ( 0 <= x && x < n && 0 <= y && y < m) ;
}
void BFS(){
	queue < ti3 > q;
	q.push(make_tuple(xd,yd,1));
	vis[xd][yd] = 1;
	int res = 1e9;
	while (!q.empty()){
		ti3 tmp = q.front();
		q.pop();
		//cout << get<0>(tmp) << ' ' << get<1>(tmp) << endl;
		if ( get<0>(tmp) == xc && get<1>(tmp) == yc ){
			res = min(res,get<2>(tmp));
			continue;
		}
		for ( int i = 0 ; i < 4 ; i++){
			int x = dx[i] + get<0>(tmp) ;
			int y = dy[i] + get<1>(tmp);
			if(  inside(x,y) && !vis[x][y] && a[x][y]  ){
				vis[x][y] = 1;
				q.push(make_tuple(x,y,get<2>(tmp) + 1));
			}
		}
	}
	if ( res == 1e9 ) cout << -1 << endl;
	else
	cout << res - 1 << endl;
}
void solve(){
	memset (vis, 0 ,sizeof vis);
	BFS();
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
 