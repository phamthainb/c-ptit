//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    duyet trau
    res =  max(ab , ba);
*/
const int maxN = 1e3 + 5;
int n,m,a[maxN] , b[maxN];
void input(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < m ; i++)
        cin >> b[i];
}
long long process(int x[] , int y[] , int n , int m){
    long long  res = 0;   
    for(int i = 0 ; i < n ; i++){
        long long sum = 0;
        for(int j = 0 ; j <= i ; j++)
            sum += x[j];
        for(int j = i + 1; j < m ; j++)
            sum += y[j];
        res  = max(res,sum);
    }
    return res;
}
void solve(){
    cout << max(process(a,b,n,m),process(b,a,m,n)) << endl;
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
 