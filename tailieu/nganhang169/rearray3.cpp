//Code By PMD
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e7 + 5;
int  a[N] , n , k ;
/*
    https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/
*/
int minSwap(int *arr, int n, int k) { 
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k) 
            ++count; 
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k) 
           ++bad; 
    int ans = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) { 
        if (arr[i] > k)  --bad; 
        if (arr[j] > k)  ++bad;
        ans = min(ans, bad); 
    } 
    return ans; 
}
void input(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    cout << minSwap(a,n,k) << endl;
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
 