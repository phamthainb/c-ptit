//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
string a[N] ;
int n;
/*
    sap xep tham lam :
    cho 2 chuoi a , b : so sanh ab voi ba 
    dung ham sort trong thu vien algorithm
*/
bool cmp(string a , string b){
    string ab = a + b;
    string ba = b + a;
    return ( ab > ba );
}
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    sort(a,a+n,cmp); // sap xep tham lam
    for(int i = 0 ; i < n ; i++){
        cout << a[i];
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
 