// fibonacci 3
#include<bits/stdc++.h>
using namespace std;

long long a[101];

int main(){
	int times; cin>>times;
		//init fibonacci
	a[0]=0; a[1]=1;
	for(int i = 2; i < 101; i++) a[i] = a[i-1] + a[i-2];
	while(times--){
		int n; cin>>n;
		while(n--){
			int temp; cin>>temp;
			for(int i = 0; i < 101; i++) if(temp == a[i]) {
				cout<<temp<<" ";
				break;
			}
		}
		cout<<endl;
	}	
}
