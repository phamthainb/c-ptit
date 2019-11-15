// oop
#include<bits/stdc++.h>
// friend
// ke thua
// chong toan tu : intoretor + 
// static

using namespace std;

class Nguoi{
	
	private:
		string  hoTen, email, sdt;
	public:
		void nhap();
		void hienThi();
};

void Nguoi::nhap(){
	cout<<"ho ten : "; getline(cin, hoTen); 
	cout<<"email : "; getline(cin, email);
	cout<<"sdt : "; getline(cin, sdt);
}
void Nguoi::hienThi(){
	cout<<endl<<hoTen<<" "<<email<<" "<<sdt<<endl;
}
// khach hang
class khachHang :public Nguoi{
	friend void sapXep(khachHang[], int);
	private :
	    int maKhachHang;
		int kieuPhong;
		string moTa;
		static int count;
	public:
		void nhap();
		void hienThi();
};

// khoi tao gia tri bien tinh
int khachHang::count = 100;
//

void khachHang::nhap(){
	Nguoi::nhap();
	maKhachHang = count; count++;
	cout<<"kieu phong : "; cin>>kieuPhong; cin.ignore(256,'\n');
	cout<<"mo ta : "; getline(cin, moTa);
}
void khachHang::hienThi(){
	Nguoi::hienThi();
	cout<<maKhachHang<<", "<<kieuPhong<<", "<<moTa<<endl;
}
// tao 1 ds khach hang
void nhapDS(khachHang ds[], int &n){
	cout<<"nhap n : "; cin>>n; cin.ignore();
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
}
void hienthiDs(khachHang ds[], int n){
	for(int i = 0; i < n; i++){
		ds[i].hienThi();
	}
}
void sapXep(khachHang ds[], int n){
	
}
int main(){
    khachHang ds[100];
    int n;
	nhapDS(ds, n);
	hienthiDs(ds, n);
}
