//Code By PMD
#include<iostream>
using namespace std;
/*
    chuyen tu string sang so ,
*/
string n;
long long m;
void input(){
    cin >> n >> m;
}
void solve(){
    long long res = 0;
    for(int i = 0 ;  i < n.length() ; i++)
        res = (res * 10 + (n[i] - '0') )%m;
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
 