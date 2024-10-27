#include "ThiSinh.h"
#include <iostream>
using namespace std;
void ThiSinh::Nhap(){
	cout<<"Nhap ten thi sinh: ";
	cin.ignore();
	cin.getline(Ten, 99);
	cout<<"Nhap MSSV thi sinh: ";
	cin >> MSSV;
	cout<<"Nhap Ngay Thang Nam sinh thi sinh: \n";
	cin>>iNgay>>iThang>>iNam;
	cout<<"Nhap diem toan thi sinh: \n";
	cin>>fToan;
	cout<<"Nhap diem ngu van thi sinh: \n";
	cin>>fVan;
	cout<<"Nhap diem tieng anh thi sinh: \n";
	cin>>fAnh;
}
void ThiSinh::Xuat(){
		cout<<Ten<<" | "<<MSSV<<" | "<<iNgay<<"/"<<iThang<<"/"<<iNam<<" | "<<fToan<<" | "<<fVan<<" | "<<fAnh;
}
float ThiSinh::Tong(){
	return fToan+fVan+fAnh;
}
