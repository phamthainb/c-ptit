//rotation 3 array
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n; cin>>n;
		vector<long long> a;
		for(int i = 0; i < n; i++){
			int temp; cin>>temp;
			a.push_back(temp);
		}
		long long temp = 0, m = 0;
		for(int j = 0; j < n; j++){// the first
				m += a[j]*j;
		}
		for(int i = 1; i < n; i++){
			rotate(a.begin(), a.begin() + 1, a.end());
			temp = 0;
			for(int j = 0; j < n; j++){
				temp += a[j]*j;
			}
			m = max(m, temp);
		}
		cout<<m<<endl;
	}
}

