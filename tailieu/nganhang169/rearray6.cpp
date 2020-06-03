//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int a[N] , n ;
/*
    dem so 0;
    neu a[i] = 0 -> dem ++
    neu a[i] = a[i+1] va a[i] khac 0 -> a[i] = a[i]*2 , a[i+1] = 0;
*/
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if (a[i] == 0) cnt++;
        else{
            if(a[i] == a[i+1]){
                a[i] *= 2;
                a[i+1] = 0;
            }
            cout << a[i] << ' ';
        }
    }
    for(int i = 1 ; i <= cnt ; i++)
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
 