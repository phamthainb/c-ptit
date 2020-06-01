//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
long long a[N] ,b[N], n ;
/*
    b[0] = a[0] * a[1];
    b[n-1] = a[n-1] * a[n-2];
    b[i] = a[i-1] * a[i+1]; voi i khac 0 va n - 1;
*/
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    b[0] = a[0]*a[1];
    b[n-1] = a[n-1] * a[n-2];
    for(int i = 1 ; i < n - 1 ; i++)
        b[i] = a[i-1] * a[i+1];
    for(int i = 0 ; i < n ; i ++)
        cout << b[i] << ' ';
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
 
