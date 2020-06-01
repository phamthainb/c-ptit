// hoan vi
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a;
	for(int i = 0; i <= 5; i++) a.push_back(i);
	for(int i = 0; i <= 5; i++) cout<<a[i]<<" ";  cout<<endl;
	rotate(a.rbegin(), a.rbegin() + 4, a.rend());// quay
	for(int i = 0; i <= 5; i++) cout<<a[i]<<" ";// sau
	return 0;
}

