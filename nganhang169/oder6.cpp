//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
/*
    https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/
*/
const int maxN = 1e7+5;
long long n,a[maxN],l[maxN] , r[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){   
    l[0] = a[0] , r[n-1] = a[n-1];
    for(int i = 1 ; i < n ; i++)
        l[i] = min(a[i],l[i-1]);
    for(int i = n -2 ; i >= 0 ; i--)
        r[i] = max(a[i],r[i+1]);
    int i = 0 , j = 0 , maxdiff = -1;
    while( i < n && j < n ){
        if(l[i] < r[j] ){
            maxdiff = max(j - i,maxdiff);
            //cout << a[i] << ' ' << a[j] << endl;
            j++;
        }
        else i++;
    }
    cout << maxdiff << endl;
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
 