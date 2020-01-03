//Oder Statistics 4
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n, a[100001]; cin>>n;
		long long b[100001];
		for(int i = 0; i < n; i++) cin>>a[i];
		long long kq = a[0];
		if(n == 2) kq = max(a[0], a[1]);
		else{
			b[0]=a[0]; b[1] = a[1]; b[2] = a[0] + a[2];
			kq = max(b[1], b[2]);
			for(int i = 3; i < n; i++){
				b[i] = a[i] + max(b[i-2], b[i-3]);
				kq = max(kq, b[i]);
			}
//			for(int i = 0; i < n; i++) cout<<b[i]<<" "; cout<<endl;
			cout<<kq<<endl;
		}
	}
}

