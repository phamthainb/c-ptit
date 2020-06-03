//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    tim vi tri i dau tien ma s[i] < s[i-1] tu phai qua
    duyet tu i den len(s) tim vi tri s[j] max sao cho ( s[j] > s[i] va s[j] < s[i-1] )
*/
string s;
void input(){
    cin >> s;
}
void solve(){
    int i = s.length() - 1;
    while ( s[i] >= s[i-1] && i > 0) i--;  
    if ( i == 0 ){
        cout << -1 << endl;
        return;
    }
    int pos = i; char m = s[i]; 
    for(int j = i ; j < s.length() ; j++){
        if ( s[j] > m && s[j] < s[i-1] ){
            m = s[j];
            pos = j;
        }
    }
    swap(s[i-1],s[pos]);
    cout << s << endl;
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
 