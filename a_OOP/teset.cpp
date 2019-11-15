#include<bits/stdc++.h>

using namespace std;

class Time {
	private :
		int gio, phut , giay;
	public :
		void nhap();
		void xuat();
};

void Time::nhap(){
	cin>>gio;
	cin>>phut;
	cin>>giay;
}
void Time::xuat(){
	cout<<gio<<":"<<phut<<":"<<giay<<endl;
}
int main(){
	Time test;
	test.nhap();
	test.xuat();
}
