//Code By PMD
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
/*
    x^y > y^x --> ylog(x) > xlog(y) --> x/log(x) < y/log(y)
    sort + thamlam + chat nhi phan;
    voi moi xlogx[i] tim vi tri id dau tien ma ylogy[id] > xlogx[i] bang chat nhi phan
    res += (m-id);
*/
const int maxN = 1e5+5;
const double inf = 1.0*1e9 ;
int a[maxN],b[maxN],n,m;
double xlogx[maxN] , ylogy[maxN];

void input(){
    cin >> n >> m;;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < m ; i++)
        cin >> b[i];
}
void solve(){
    for(int i = 0 ; i < n ; i++){
        if( a[i] == 1 ) xlogx[i] = inf;
        else xlogx[i] = 1.0*a[i]/log(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        if( b[i] == 1 ) ylogy[i] = inf;
        else ylogy[i] = 1.0*b[i]/log(b[i]);
    }
    sort(xlogx,xlogx+n);
    sort(ylogy,ylogy+m);
    long long res = 0;
    for(int i = 0 ; i < n ; i++){
        int id =  upper_bound(ylogy,ylogy+m,xlogx[i]) - ylogy;
        res += 1LL*(m - id);
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
 
