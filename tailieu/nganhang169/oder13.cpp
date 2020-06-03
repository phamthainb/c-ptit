//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    tao mang b bang voi mang a 
    sap xep mang b , tim phan tu dau tien lon hon a[i] trong mang b bang chat nhi phan.
    -co the tu code chat nhi phan , nhung minh dung ham upper_bound cho nhanh
    http://www.cplusplus.com/reference/algorithm/upper_bound/
*/
const int maxN = 1e6+5;
int n,a[maxN],b[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        b[i] = a[i];
    }
}
void solve(){
    sort(b,b+n);
    for(int i = 0 ; i < n ; i++){
        int id = upper_bound(b,b+n,a[i]) - b;
        if  (0 <= id && id < n)
            cout << b[id] << ' ';
        else cout << '_' << ' ';
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
 