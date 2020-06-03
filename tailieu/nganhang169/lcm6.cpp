//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
long long n,m;
void input(){
    cin >> n >> m;
}
void solve(){
   long long sum = n*(n+1)/2; // tinh tong tu 1 den n
    if ( m > sum )
       cout << "No" << endl;
    else{
        long long x = (sum + m)/2; // giai he pt a + b = sum; a - b = m;(a, b la tong cac day con)
        long long y = sum - x;
        //cout << x << ' ' << y << endl;
        if ((x + y )== sum && (x - y) == m &&  x >= 0 && y >= 0 && __gcd(x,y) == 1) 
            cout << "Yes" << endl;
        else cout  << "No" << endl;
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
 