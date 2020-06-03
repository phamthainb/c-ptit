//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
long long lcm(long long a , long long b){
    return (a*b)/__gcd(a,b));
}
long long a,b,c,n;
void input(){
    cin >> a >> b >> c >> n;
}
void solve(){
    long long z = lcm(a, lcm(b, c));
    long long t1 = pow(10, n - 1), t2 = pow(10, n);
    if (z >= t2) cout << -1 << endl;
    else
    {
        if (t1 % z == 0) cout << t1 << endl;
        else cout << (t1/z + 1) *z << endl;
    }
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
 