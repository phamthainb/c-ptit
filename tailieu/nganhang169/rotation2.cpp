//Code By PMD
#include<iostream>
using namespace std;
const int N = 1e7 + 5;
int a[N] , n ;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    int i = 0;
    while(a[i] < a[i+1] && i < n - 1) i ++;
    cout << i + 1 << endl;
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
 