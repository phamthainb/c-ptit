//Code By PMD
#include<iostream>
using namespace std;
const int N = 1e6 + 5;
int a[N] , n , d;
void input(){
    cin >> n >> d ;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    d = d % n;    
    for(int i = d ; i < n ; i++)
        cout << a[i] << ' ';
    for(int i = 0 ; i < d ; i++)
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
 