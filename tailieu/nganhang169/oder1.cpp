//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    sap xep va dua ra phan tu thu k.
*/
const int maxN = 1e5+5;
int n,k,a[maxN];
void input(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){
    sort(a,a+n);
    cout << a[k-1] << endl;
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
 