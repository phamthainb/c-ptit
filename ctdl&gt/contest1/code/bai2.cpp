//tap con ke tiep
#include<bits/stdc++.h>
using namespace std;
//define
int n, k, a[1001];

bool checkLast(){
	for(int i = k - 1; i >= 0; i--){
		if(a[i] != (n - k + i + 1)){
			return false;
		}
	}
	return true;
}
int main(){
	int times; cin>>times;
	while(times--){
		
		cin>>n>>k;
		for(int i = 0; i < k; i++) cin>>a[i];//input a[]
		//check last =>
		if(!checkLast()){
			//find t, if a[i] < n - k + i
			int t;
			for(int i = k - 1; i >= 0; i--){
				if(a[i] < (n - k + i)){
					t = i;
					break;
				}
			}
			a[t]++;
			for(int i = t + 1; i < k; i++) a[i] = a[i - 1] + 1;
			for(int i = 0; i < k; i++) cout<<a[i]<<" ";
		}else for(int i = 0; i < k; i++) cout<<i+1<<" ";
		cout<<endl;
	}
	return 0;
}

