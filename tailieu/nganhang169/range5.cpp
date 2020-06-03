//Code By PMD
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*
*/
const int maxN = 1e6+5;
int a[maxN],n;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if ( sum < n ) continue;
        if ( sum == n ){
            cout << i + 1<< endl;
            break; 
        }
        if ( sum > n ){
            cout << i  << endl;
            break;
        }
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
 