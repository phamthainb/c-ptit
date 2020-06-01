//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e7 + 5;
long long a[N] , n ;
/*
    tao mot mang b co phan tu ban dau bang 0'
    duyet toan bo mang a;
    neu 0 <= a[i]  < n thi b[a[i]] = 0;
    duyet toan bo mang b , neu b[i] = 1 thi in ra i , nguoc lai in ra -1;
*/
int b[N];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = 0;
    }
}
void solve(){
    for(int i = 0 ; i < n ; i++){
        if (0 <= a[i] && a[i] < n)
            b[a[i]] = 1;
    }
    for(int i = 0 ; i < n ; i++){
        if ( b[i] == 1 ) cout << i << ' ';
        else cout << -1 << ' ';
    }
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
 