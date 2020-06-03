//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    dung` ham` tinh ucln : __gcd trong thu vien algorithm
    bcnn = a*b/ucln;
    tinh bcnn tu 1 .... n . chu y kdl.
*/
long long lcm(long long a , long long b){
    return (a*b/__gcd(a,b));
}
int n;
void input(){
    cin >> n;
}
void solve(){
    long long bcnn = 1;
    for(int i = 1 ; i <= n ; i++)
        bcnn = lcm(bcnn,i);
    cout << bcnn << endl;
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
 