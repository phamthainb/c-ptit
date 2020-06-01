//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    sap xep. + tham lam
*/
const int maxN = 1e5+5;
int a[maxN],n,x;
bool cmp(int a , int b){
    return ( abs(a-x) < abs(b-x) );
}
void input(){
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
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
 