// Oder Statistics 10.
#include<bits/stdc++.h>

using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n, kq=0, a[1001],b[1001];
		cin>>n;
		for(int i = 0; i < n; i++) cin>>a[i];
		b[0]=1;
		for(int i = 1; i < n; i++){
			int m = 0;
			for(int j = i - 1; j >= 0; j--){
				if(a[j] < a[i]){
					m = max(m, b[j]);	
				}
			}
			b[i]= m + 1;
			kq = max(kq, b[i]);
		}
		cout<<kq<<endl;
	}
}
