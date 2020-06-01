//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    https://www.geeksforgeeks.org/given-matrix-o-x-replace-o-x-surrounded-x/
    may bai nay di thi ai ma lam duoc :((
*/
int M,N;

char mat[17][17];
void floodFillUtil( int x, int y, char prevV, char newV) 
{ 
    if (x < 0 || x >= M || y < 0 || y >= N) 
        return; 
    if (mat[x][y] != prevV) 
        return; 
    mat[x][y] = newV; 
    floodFillUtil(x+1, y, prevV, newV); 
    floodFillUtil( x-1, y, prevV, newV); 
    floodFillUtil( x, y+1, prevV, newV); 
    floodFillUtil( x, y-1, prevV, newV); 
} 
int replaceSurrounded() 
{ 
   for (int i=0; i<M; i++) 
      for (int j=0; j<N; j++) 
          if (mat[i][j] == 'O') 
             mat[i][j] = '-'; 
   for (int i=0; i<M; i++)   // Left side 
      if (mat[i][0] == '-') 
        floodFillUtil(i, 0, '-', 'O'); 
   for (int i=0; i<M; i++)  //  Right side 
      if (mat[i][N-1] == '-') 
        floodFillUtil(i, N-1, '-', 'O'); 
   for (int i=0; i<N; i++)   // Top side 
      if (mat[0][i] == '-') 
        floodFillUtil( 0, i, '-', 'O'); 
   for (int i=0; i<N; i++)  // Bottom side 
      if (mat[M-1][i] == '-') 
        floodFillUtil( M-1, i, '-', 'O'); 
   for (int i=0; i<M; i++) 
      for (int j=0; j<N; j++) 
         if (mat[i][j] == '-') 
             mat[i][j] = 'X'; 
  
} 
void input(){
    cin >> M >> N;
    for(int i = 0 ; i < M ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> mat[i][j];
        }
    }
} 
void solve(){
    replaceSurrounded(); 
    for (int i=0; i<M; i++) { 
        for (int j=0; j<N; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
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
 
 
