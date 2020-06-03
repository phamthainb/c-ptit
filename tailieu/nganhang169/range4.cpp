//Code By PMD
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*

*/
const int maxN = 1e6+5;
int a[maxN];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    long long s = 0,res = 0;
    int x = *max_element(a,a+n); // max cua mang a
    if ( x < 0){
        // neu day a toan so am , thi in ra so lon nhat
        cout << x << endl;
    }
    else{
        for(int i = 0 ; i < n ; i++){  // tim day con lien tiep co tong lon nhat.
            s += a[i];
            if ( s < 0 ) s = 0;
            else res = max(res,s);
        }
        cout << res << endl;
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
 