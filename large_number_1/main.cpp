// bai 36 large number 1
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
//ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
	 string a, b;
	 iff>>a>>b;
	 if(a.size() < b.size() || (a.size() == b.size() && a < b)) swap(a,b);
	 int x = a.size() - b.size();
	 if(x > 0) while(x--) b = '0' + b;
	 cout<<a<<" "<<b<<endl;
	 int nho = 0;
	 string c = "";
	 for(int i = a.size() - 1; i >= 0; i--){
	 	int a1 = a[i] - '0';
	 	int b1 = b[i] - '0';
	 	if(a1 < (b1 + nho)){
	 		c += ('0' + (10 + a1 - b1 - nho));
			nho = 1; 
		 }
		 else{
		 	c += ('0' + (a1 - b1 - nho));
			nho = 0; 
		 }
	 }
	 if(c[c.size() - 1] != '0') cout<<c[c.size() - 1];
	 for(int i = c.size() - 2; i >= 0; i--) cout<<c[i];
	 cout<<endl;
	}
	return 0;
}
