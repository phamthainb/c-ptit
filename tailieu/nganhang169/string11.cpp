//Code By PMD
#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long i64;
string a,b;
/*
    y tuong : toa mang dem so chu cai cua b.
    duyet toan bo day con lien tiep cua a , tim day con ngan nhat , xuat hien dau tien sao cho
    chua toan bo chu cai  cua b.
*/
void input(){
    cin >> a >> b;
}
void solve(){
    if ( a.length() < b.length() ){
        cout << -1 << endl;
        return;
    }
    int minn = 101;
    string res;
    map < char , int > cntb;
    for(int i = 0 ; i < b.length() ; i++) cntb[b[i]]++;
    for(int i = 0 ; i < a.length() ; i++){
        string tmp = "";
        map < char , int > cnta; 
        for(int j = i  ; j < a.length() ; j++){
            tmp += a[j] ;
            cnta[a[j]]++;
            if ( j - i + 1 >= b.length() ){
                int flag = 0;
                for(auto x : cntb){
                   // cout << x.first << ' ' << cnta[x.first]  << ' ' << x.second << endl;
                    if ( cnta[x.first] < x.second ){
                        flag = 1;
                        break;
                    }
                }
                if ( !flag ){
                    int m = tmp.length();
                    if ( m < minn ){
                        res = tmp;
                        minn = m;
                    }
                    break;
                }
            }
        }
    }
    if ( minn == 101 ){
        cout << -1 << endl;
        return;
    } 
    cout << res << endl;
    
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    faster();int t=1; 
    cin>>t; cin.ignore();
    while(t--){ input();solve();}
    cerr << "\nRunning is : " << 1.0*clock()/1000 ;
    return 0;
}
//Code By PMD
 