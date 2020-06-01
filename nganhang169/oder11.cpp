//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    dung mang danh dau 10^6 phan tu
*/
const int maxN = 1e6+5;
int n,a[maxN] , b[maxN] ;
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    for(int i = 1 ; i <= maxN ; i++)
        b[i] = 0;
}
void solve(){   
    for(int i = 0 ; i < n ; i++){
        if( a[i] >= 0)
            b[a[i]] = 1;
    }
    for(int i = 1 ; i <= maxN ; i++){
        if(b[i] == 0){        
            cout << i << endl;
            break;
        }
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
 