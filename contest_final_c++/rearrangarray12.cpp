// re arrang array 12
#include<bits/stdc++.h>

using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n; cin>>n;
		long long a[101];
		for(int i = 0; i < n; i++) cin>>a[i];
		long long kq = a[0];
		for(int i = 0; i < n-1; i++){
			long long temp = a[i];
//			kq=max(kq, a[i]);
			for(int j = i + 1; j < n; j++){
				temp *= a[j];
				kq = max(kq, temp);
			}
		}
		cout<<kq<<endl;
	}
}
