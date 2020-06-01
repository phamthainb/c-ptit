//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
*/
string s;
int dem[10] = {0};
void input(){
    cin >> s;
    for(int i = 0 ; i < 10 ; i++)
        dem[i] = 0;
}
bool khongchuasochan(){
    for(int i = 1 ; i <= 9 ; i++){
        if ( dem[i] % 2 == 0 && dem[i] != 0) return false;
    }
    return true;
}
void solve(){
    for(int i = 0 ; i < s.length() ; i++)
        dem[s[i]-'0']++;
    if( khongchuasochan() == true){
        int res = 0;
        int cs ;
        for(int i = 1 ; i <= 9 ; i++){
            if(dem[i] != 0){
                if( dem[i] > res){
                    res = dem[i];
                    cs = i;
                }
                if ( dem[i] == res)
                    cs = max(cs,i);
            }
        }
        while(res--) cout << cs ;
        cout << endl;
    }
    else{
        int res = 0;
        int cs ;
        for(int i = 9 ; i >= 0 ; i--){
            if(dem[i] % 2 == 0){
                int x = dem[i]/2;
                while(x--) cout << i ;
            }
            else{
                if( dem[i] > res){
                    res = dem[i];
                    cs = i;
                }
                if ( dem[i] == res)
                    cs = max(cs,i);
            }
        }
        while(res--) cout << cs ;
        for(int i = 0 ; i < 10 ; i++){
            if(dem[i] % 2 == 0){
                int x = dem[i]/2;
                while(x--) cout << i ;
            }
        }
        cout << endl;
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
 