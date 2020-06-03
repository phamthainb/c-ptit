//63 re-arrang array 13
#include<bits/stdc++.h>
using namespace std;

void nhap(vector<int> &a, int n){
	for(int i = 0; i < n; i++){
		int temp; cin>>temp;
		a.push_back(temp);
	}
}

int main(){
	int times; cin>>times;
	while(times--){
		vector<int> a, b;
		int n, m; cin>>n>>m;
		nhap(a, n); nhap(b, m);
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(b[i] == a[j]) {
					cout<<a[j]<<" ";
					a[j]=-1;
				}
			}
		}
		sort(a.begin(), a.end());
		for(int i = 0; i < n; i++) if(a[i] != -1) cout<<a[i]<<" ";
		cout<<endl;
	}
}

