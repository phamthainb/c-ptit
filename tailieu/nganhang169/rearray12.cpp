//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100 + 5;
/*
    day con co tich lon nhat
    duyet trau 
*/
int a[N] , n ;
void input(){
    cin >> n;
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
}
void solve(){
    long long res = -1e18;
    for(int i = 0; i < n; i++){
        long long tmp = 1;
        for(int j = i;j < n;j++){
            tmp *= a[j];
            res = max(res, tmp);
        }
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
 