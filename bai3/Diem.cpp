#include"Diem.h"
#include <iostream>
#include <math.h>
using namespace std;
void Diem::Nhap(){
	cin >> HoanhDo >> TungDo;
};
void Diem::Xuat(){
	cout <<"("<< HoanhDo <<","<< TungDo <<")"<< endl;
};
void Diem::TinhTien(int x, int y){
	Diem a;
	a.HoanhDo = HoanhDo + x;
	a.TungDo = TungDo + y;
	a.Xuat();
};
void Diem::PhongTo(int k){
	Diem a;
	a.HoanhDo = HoanhDo * k;
	a.TungDo = TungDo * k;
	a.Xuat();
};
void Diem::ThuNho(int l){
	Diem a;
	a.HoanhDo = HoanhDo / l;
	a.TungDo = TungDo / l;
	a.Xuat();
};
void Diem::Quay(double q){
	Diem p;
	p.HoanhDo = HoanhDo;
	p.TungDo = TungDo;
	double BanKinh = sqrt(pow(p.HoanhDo, 2) + pow(p.TungDo, 2));
	p.HoanhDo = BanKinh * cos(q);
	p.TungDo = BanKinh * sqrt(1 - pow(cos(q), 2));
	p.Xuat();
};
