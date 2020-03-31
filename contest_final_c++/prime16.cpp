// prime 16
#include<bits/stdc++.h>
using namespace std;

long long a[1000001]={0};

int main(){
	a[0]=a[1]=1;
	for(int i = 2; i <= 1000; i++){
		if(a[i] == 0){
			for(int j = i*i; j <= 1000000; j += i){
				if(a[j] == 0) a[j]=1;
			}
		}
	}
	
	int times; cin>>times;
	while(times--){
		long long n, count = 0; cin>>n;
		for(long long i = 2; i <= sqrt(n); i++) if(a[i] == 0) count+=1;
		cout<<count<<endl;
	}	
}
