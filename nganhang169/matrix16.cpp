//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    https://www.geeksforgeeks.org/given-matrix-o-x-find-largest-subsquare-surrounded-x/
    may bai nay di thi  ai ma lam duoc :((
*/
int N;
char mat[17][17];
int getMin(int x, int y) { return (x<y)? x: y; } 
int findSubSquare() 
{ 
    int max = 0; 
    int hor[N][N], ver[N][N]; 
    hor[0][0] = ver[0][0] = (mat[0][0] == 'X'); 
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
        { 
            if (mat[i][j] == 'O') 
                ver[i][j] = hor[i][j] = 0; 
            else
            { 
                hor[i][j] = (j==0)? 1: hor[i][j-1] + 1; 
                ver[i][j] = (i==0)? 1: ver[i-1][j] + 1; 
            } 
        } 
    } 

    for (int i = N-1; i>=1; i--) 
    { 
        for (int j = N-1; j>=1; j--) 
        { 
        
            int small = getMin(hor[i][j], ver[i][j]); 
            while (small > max) 
            { 
                if (ver[i][j-small+1] >= small && 
                    hor[i-small+1][j] >= small) 
                { 
                    max = small; 
                } 
                small--; 
            } 
        } 
    } 
    return max; 
} 
void input(){
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> mat[i][j];
        }
    }
} 
void solve(){
    cout << findSubSquare() << endl; 
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
 
 
