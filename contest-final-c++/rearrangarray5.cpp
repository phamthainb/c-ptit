//Re-arrang Array 5
#include<bits/stdc++.h>

using namespace std;
bool myfunction (int i,int j) { return (i>j); }
int main(){
	int times; cin>>times;
	while(times--){
		int n, a[1001]; cin>>n;
		for(int i = 0; i < n; i++) cin>>a[i];
		sort(a, a + n, myfunction);
		for(int i = 0; i < n/2; i++){
			cout<<a[i]<<" "<<a[n-1-i]<<" ";
		}
		if(n%2 == 1) cout<<a[n/2];
		cout<<endl;
	}
}
