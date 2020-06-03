//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    https://www.geeksforgeeks.org/maximum-difference-between-two-elements/
*/
const int maxN = 1e5+5;
int n,a[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){
    int maxdiff = a[1] - a[0];
    int minn = a[0];
    for(int i = 1 ; i < n ; i++){
        maxdiff = max(maxdiff,a[i] - minn);
        minn = min(minn,a[i]);
    }
    if( maxdiff <= 0 ) cout << -1 << endl;
    else cout<< maxdiff << endl;
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
 