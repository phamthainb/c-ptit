//Code By PMD
#include<iostream>
using namespace std;
const int N = 1e7 + 5;
int a[N] , n ;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    long long ans = 0,s = 0,s1 = 0;
    for(int i = 0; i < n ; i++){
        s += a[i];
        s1 += a[i]*i;
    }
    ans = s1;	
    for(int i=0 ; i < n-1 ; i++){
        s1 = s1- s + a[i]*n;
        ans = max(ans,s1);
    }
    cout<< ans <<endl;
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
 