//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    sol : https://www.geeksforgeeks.org/gcd-two-numbers-formed-n-repeating-x-y-times/
*/
long long  a,x,y;
void input(){
    cin >> a >> x >> y;
}
void solve(){
    for(int i = 1 ; i <= __gcd(x,y) ; i++)
        cout << a;
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
 