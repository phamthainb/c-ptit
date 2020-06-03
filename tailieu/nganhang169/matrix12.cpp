//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    https://www.geeksforgeeks.org/program-for-rank-of-matrix/
*/
int R,C;
int mat[17][17];
void input(){
    cin >> R >> C;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> mat[i][j];
        }
    }
}
void swap(int row1, int row2, int col) { 
    for (int i = 0; i < col; i++) { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 
int rankOfMatrix() 
{ 
    int rank = C; 
    for (int row = 0; row < rank; row++) { 
        if (mat[row][row]) { 
            for (int col = 0; col < R; col++){ 
                if (col != row) { 
                    double mult = (double)mat[col][row]/mat[row][row]; 
                    for (int i = 0; i < rank; i++) 
                        mat[col][i] -= mult * mat[row][i]; 
                } 
            } 
        } 
        else{ 
            bool reduce = true; 
            for (int i = row + 1; i < R;  i++) { 
                if (mat[i][row]) { 
                    swap( row, i, rank); 
                    reduce = false; 
                    break ; 
                } 
            } 
            if (reduce) { 
                rank--; 
                for (int i = 0; i < R; i ++) 
                    mat[i][row] = mat[i][rank]; 
            } 
            row--; 
        } 
    } 
    return rank; 
} 
void solve(){
    cout << rankOfMatrix() << endl;
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
 
 