//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;

const int maxn =  55;
 
int  n , m , a[maxn][maxn];
int  h[maxn] , l[maxn] , r[maxn];
int res;
void input(){
    cin >> m  >> n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++) 
            cin >> a[i][j];
}
void solve(){
    h[0] = -1; h[n+1] = -1;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++)
            h[j] = a[i][j] * (h[j] + 1);
        for (int j=1;j<=n;j++) {
            l[j] = j;
            while (h[l[j]-1] >= h[j]) l[j] = l[l[j]-1];
        }
        for (int j= n ;j>0;j--) {
            r[j] = j;
            while (h[r[j]+1] >= h[j]) r[j] = r[r[j]+1];
        }
        for (int j=1;j<=n;j++)
            res = max(res,h[j]*(r[j]-l[j]+1));
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
 
 