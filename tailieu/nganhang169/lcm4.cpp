//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
long long a;
string b;
void input(){
    cin >> a >> b;
}
void solve(){
    long long mod=0;
    for(int i=0;i<b.size();i++){
        mod=(mod*10 + (b[i]-'0'))%a;
    }
    cout<<__gcd(a,mod)<<endl;
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
 