    //Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    tim phan tu dau tien ( a[i] > a[i+1] )
*/
const int maxN = 1e7+5;
long long n,a[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){   
    int i = 0 ;
    while(a[i] < a[i+1] && i < n - 1) i++;
    cout << a[i] << endl;
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
 