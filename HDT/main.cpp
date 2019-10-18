// huong doi tuong
#include<bits/stdc++.h>

using namespace std;

class Dathuc{
	private :
		int bac, heso[100];
	public :
		void nhap();
		void hienthi();
};
void Dathuc::nhap(){
	cin>>bac;
	for(int i = 0; i < bac; i++) cin>> heso[i];
}
void Dathuc::hienthi(){
	for(int i = 0; i < bac - 1; i++) cout<<heso[i]<<"x^"<<i<<" + ";
	cout<<heso[bac - 1]<<"x^"<<bac-1<<endl;
}
int main(){
	Dathuc t;
	t.nhap();
	t.hienthi();
}
