//Code By PMD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+ 5;
/*
    sap xep tham lam
    ham sort trong thu vien thuat toan
*/
int a[N], b[N] , id[N] = {0} , n , m;
bool cmp(int x , int y){ // so sanh x voi y
    if ( id[x] == 0 && id[y] == 0)                      
        return x < y;
    else if(id[x] != 0 && id[y] == 0)   return true;
    else if(id[x] == 0 && id[y] != 0)   return false;
    else 
        return ( id[x] < id[y] );

}
void input(){
    cin >> n >> m;
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
    memset(id , 0 , sizeof id);
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
        id[b[i]] = i + 1;
    }
}
void solve(){
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++){
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
 
