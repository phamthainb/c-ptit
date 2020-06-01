//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    https://www.geeksforgeeks.org/check-given-string-sum-string/
*/

string s;

bool checkSumStrUtil(string str, int beg, int len1, int len2) { 
  
    string s1 = str.substr(beg, len1); 
    string s2 = str.substr(beg + len1, len2); 
    string s3 = add(s1, s2); 
    int s3_len = s3.size(); 
    if (s3_len > str.size() - len1 - len2 - beg) 
        return false; 
    if (s3 == str.substr(beg + len1 + len2, s3_len)) { 
        if (beg + len1 + len2 + s3_len == str.size()) 
            return true; 
        return checkSumStrUtil(str, beg + len1, len2, s3_len); 
    } 
    return false; 
} 

bool isSumStr(string str) 
{ 
    int n = str.size(); 
    for (int i = 1; i < n; i++) 
        for (int j = 1; i + j < n; j++) 
            if (checkSumStrUtil(str, 0, i, j)) 
                return true; 
  
    return false; 
} 
void input(){
    cin >> s;
}
void solve(){
    if(isSumStr(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
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
 