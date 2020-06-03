//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/**/
const int N = 1e5 + 5;
int n;
int a[N];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
}
void solve(){
    int minn = 1e9;
    for(int i = 0 ; i < n ; i++)
        minn = min(minn,a[i]);
    int ucln = a[0] - minn;
    for(int i = 0 ; i < n ; i++){
        ucln = __gcd(ucln,a[i] - minn);
    }
    int res = 0;
    for(int i = 1 ; i <= ucln ; i++){
        if ( ucln % i == 0 ) res++;
    }
    cout << res << endl;
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
 