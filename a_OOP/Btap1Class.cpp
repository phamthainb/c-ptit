//

#include <iostream>
#include <string>
using namespace std;

class Nguoi {
protected:
	string HoTen;
	string email;
	int SDT;
public:
	void nhap();
	void xuat();
	void doctep();
	void ghitep();
};

void Nguoi::nhap() {
	cin.ignore();
	getline(cin, HoTen);
	cin.ignore();
	cin >> email;
	cin >> SDT;
}

void Nguoi::xuat() {
	cout << HoTen << "; " << email << "; " << SDT;
	cout << endl;
}

class KhachHang :protected Nguoi {
protected:
	int maKH;
	int loaiPhong[3]; 
	string mota;
	static int count;
public:
	friend class BangSX;
	void nhap();	
	void doctep();
	void hienthi();
	void ghitep();
};

int KhachHang::count = 1000;

void KhachHang::nhap() {
	Nguoi::nhap();
	maKH = count; count++;
	for (int i = 0; i < 3; i++) {
		cin >> loaiPhong[i];
	}
	cin.ignore();
	getline(cin, mota);
}

void KhachHang::hienthi() {
	Nguoi::xuat();
	cout << maKH << endl;
	for (int i = 0; i < 3; i++) {
		cout << loaiPhong[i]<< " ";
	}
	cout << endl;
	cout << mota << endl;
}

class Phong {
protected:
	int maPhong;
	int kieuPhong;  //1. Đơn, 2. Đôi, 3. VIP
	int Tien;
	static int count;
public:
	friend class BangSX;
	void nhap();
	void doctep();
	void hienthi();
	void ghitep();
};

int Phong::count = 100;

void Phong::nhap() {
	maPhong = count;	count++;
	cin >> kieuPhong;
	cin >> Tien;
}

void Phong::hienthi() {
	cout << maPhong << ": " << kieuPhong << " " << Tien <<" ";
}

struct PHONG {
	Phong dsp;
	int soNgay;
};

struct Customer {
	KhachHang kh;
	PHONG dsp[50];
};

class BangSX {
protected:
	Customer ds;
	int sophong;
public:
	void nhap();
	void hienthi();
	void ghitep();
	void doctep();
	void sapxep();
	float tinhtien(int );
	void hoaDon(int i);
};

void BangSX::nhap() {
	do {
		cin >> sophong;
	} while (sophong > 50);
	ds.kh.nhap();
	for (int i = 0; i < sophong; i++) {
		ds.dsp[i].dsp.nhap();
		cin>> ds.dsp[i].soNgay;
	}
}

void BangSX::hienthi() {
	ds.kh.hienthi();
	for (int i = 0; i < sophong; i++) {
		ds.dsp[i].dsp.hienthi();
		cout<<ds.dsp[i].soNgay;
		cout << endl;
	}	
}

int main() {
	BangSX	a;
	a.nhap();
	a.hienthi();
}

