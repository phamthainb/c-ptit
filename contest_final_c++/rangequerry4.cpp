//range querry 4
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		vector<long long> a, b;
		int n; cin>>n;
		for(int i = 0; i < n; i++){
			int t; cin>>t;
			a.push_back(t);
		}
		long long kq = a[0], temp = 0;
		for(int i = 0; i < n; i++){
			temp += a[i];
			kq = max(kq, temp);
			if(temp < 0) temp = 0;
		}
		cout<<kq<<endl;
	}
}

