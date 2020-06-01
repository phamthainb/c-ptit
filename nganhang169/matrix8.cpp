//Code By PMD
#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long i64;
int n;
int a[405][405];
int b[405][405];
vector < int > res1,res2;
void input(){
    res1.clear() , res2.clear();
    cin >> n;
    n *= 4;
    int tmp = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            a[i][j] = tmp++;
        }
    }
}
void Try(){
    int l = 1 , r = n , top = 1 , bot = n;
    while(l < r && top < bot){
        //cout << l << ' ' << r << ' ' << top << ' ' << bot << endl;
        for(int i = top ; i <= bot ; i ++) res1.push_back(a[i][l]),res2.push_back(a[n-i+1][n-l+1]);
        r--;l++;
        for(int i = l ; i <= r ; i++) res1.push_back(a[bot][i]),res2.push_back(a[n-bot+1][n-i+1]);
        top++;
        for(int i = bot ; i >= top ; i--) res1.push_back(a[i][r]),res2.push_back(a[n-i+1][n-r+1]);
        l++,r--;
        for(int i = r ; i >= l ; i--) res1.push_back(a[top][i]),res2.push_back(a[n-top+1][n-i+1]);
        bot-=2,top++; 
    }
}
void solve(){
    Try();
    for(int i = res2.size() - 1; i >= 0 ; i-- ){
        if ( res2[i] == res2[i-1] ){
            cout << res2[i] << ' ';
            i--;
        }
        else cout << res2[i] << ' ';
    }
    cout << endl;
    for(int i = res1.size() - 1; i >= 0 ; i-- ){
        if ( res1[i] == res1[i-1] ){
            cout << res1[i] << ' ';
            i--;
        }
        else cout << res1[i] << ' ';
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
 