//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    voi moi a[i], tim a[j] nho nhat sao cho a[i] > a[j].
    swap(a[i],a[j])
*/
const int maxN = 1e3+5;
int a[maxN],n;

void input(){
    cin >> n ;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        int tmp = a[i], id = i;
        int flag = 0;
        for(int j = i + 1 ; j < n ; j++){
            if( a[j] < tmp  ){
                tmp = a[j];
                id = j;
                flag = 1;
            }
        }
        if(flag == 1){
            swap(a[i],a[id]);
            res++;
        }
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
 
