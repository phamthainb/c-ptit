//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int a[N] , n , k;
/*
   sap xep
*/
void input(){
    cin >> n >> k;
    for(int i = 0 ; i < n * k; i++){
        cin >> a[i];
    }
}
void solve(){
    sort(a,a+n*k);
    for(int i = 0 ; i < n*k ; i++){
        cout << a[i] << ' ';
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
 