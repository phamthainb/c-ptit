//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    dung` ham` tinh ucln : __gcd trong thu vien algorithm
    bcnn : a*b/ucln;
    chu y kieu du lieu .
*/
long long a,b;
void input(){
    cin >> a >> b;
}
void solve(){
    long long ucln = __gcd(a,b); 
    cout << a*b/ucln << ' ' << ucln << endl;
}
int main(){
   
    int t = 1; 
    cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 