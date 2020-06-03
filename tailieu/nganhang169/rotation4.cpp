//Code By PMD
#include<iostream>
using namespace std;
const int N = 1e7 + 5;
long long a[N] , n ;
long long findMin(long long arr[], int low, int high){ 
    if (high < low) return arr[0];  
    if (high == low) return arr[low];
    int mid = low + (high - low)/2;
    if (mid < high && arr[mid + 1] < arr[mid]){
    	return arr[mid + 1];
	}  
    if (mid > low && arr[mid] < arr[mid - 1]){
    	return arr[mid];
	}
    if (arr[high] > arr[mid]){
    	 return findMin(arr, low, mid - 1);  
	} 
    return findMin(arr, mid + 1, high);  
} 
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(){
    cout<<findMin(a,0,n-1)<<endl;
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
 