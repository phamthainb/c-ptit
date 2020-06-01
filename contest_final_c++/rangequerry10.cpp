//Range Querry 10.
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n, a[1001], count = 0; cin>>n;
		for(int i = 0; i < n; i++) cin>>a[i];
		int left = 0, right = n - 1;
		while(left < right){
			if(a[left] == a[right]){
				left++; right--;
			}else if(a[left] < a[right]){
				a[left + 1] += a[left];
				left++; 
				count++;
			}else{
				a[right - 1] += a[right];
				count++;
				right--;
			}
		}
		cout<<count<<endl;
	}
}

