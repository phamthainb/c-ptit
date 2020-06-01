#include <bits/stdc++.h>

const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
 
using namespace std;
 
struct mincv{
    int l;
    int r;
};
 
bool cmp(mincv a,mincv b){
    return a.r<b.r;
}
 
void Solve(){
    int n;
    cin >> n;
    mincv s[n];
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        s[i].l=a[i];
        s[i].r=b[i];
    }
     for(int i=0;i<n;i++) cout <<"cv : "<<s[i].l<<" "<< s[i].r<<endl;
     cout<<"-------"<<endl;
    sort(s, s+n, cmp);
     for(int i=0;i<n;i++) cout <<"cv : "<<s[i].l<<" "<< s[i].r<<endl;
    int tmp=0;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i].l>=s[tmp].r){
            ans++;
            tmp=i;
        }
    }
    cout << ans<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 
