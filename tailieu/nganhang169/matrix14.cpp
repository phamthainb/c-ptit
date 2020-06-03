//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    https://www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
*/
int n,m;
int a[17][17];
int s[17][17];
void input(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
} 
void solve(){
    for(int i = 0 ; i < n ; i++) s[i][0] = a[i][0];
    for(int i = 0 ; i < m ; i++) s[0][i] = a[0][i];
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(a[i][j] == 1){
                s[i][j] = min(s[i][j-1],min(s[i-1][j],s[i-1][j-1])) + 1;
            }
            else s[i][j] = 0;
        }
    }
    int max_of_s = s[0][0] ,max_i = 0, max_j = 0;  
    for(int i = 0; i < n; i++)  {  
        for(int j = 0; j < m; j++)  {  
            if(max_of_s < s[i][j])  {  
                max_of_s = s[i][j];  
                max_i = i;  
                max_j = j;  
            }  
        }              
    } 
    cout << max_of_s << endl;
  
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
 
 