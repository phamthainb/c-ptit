//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    tong nho nhat : doi het 6 thanh 5.
    tong lon nhat : doi het 5 thanh 6.
    cong so nguyen lon.
*/

string s1,s2;

void findmin(string a , string b){
    for(int i = 0 ; i < a.length() ; i++)
        if(a[i] == '6') a[i] = '5';
    for(int i = 0 ; i < b.length() ; i++)
        if(b[i] == '6') b[i] = '5';
    cout << add(a,b) << ' ';
}
void findmax(string a , string b){
    for(int i = 0 ; i < a.length() ; i++)
        if(a[i] == '5') a[i] = '6';
    for(int i = 0 ; i < b.length() ; i++)
        if(b[i] == '5') b[i] = '6';
    cout << add(a,b) << ' ';
}
void input(){
    cin >> s1 >> s2;
}
void solve(){
    findmin(s1,s2);
    findmax(s1,s2);
    cout << endl;
}
int main(){
    int t=1; 
    cin>>t; cin.ignore();
    while(t--){ 
        input();solve();
    }
    return 0;
}
//Code By PMD
 