//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e7 + 5;
long long a[N] , n ;
/*
    dem so luong so 0;
    duyet toan bo mang a , neu a[i] khac 0 thi in ra a[i];
    in ra cac so 0 con lai.
*/
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    int dem = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 0) dem++;
        else cout << a[i] << ' ';
    }
    for(int i = 1 ; i <= dem ; i++)
        cout << 0 << ' ';
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
 