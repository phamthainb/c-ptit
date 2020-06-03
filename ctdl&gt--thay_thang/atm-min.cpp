#include <bits/stdc++.h>

const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
int n;
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500};

void Solve(){
    cin >> n;
    int ans=0;
    while(n>0){
        for(int i=8;i>=0;i--){
            if(n>=a[i]){
                ans+=(n/a[i]);
                n-= a[i]*(n/a[i]);
            }
        }
    }
    cout <<ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}
